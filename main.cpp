#include <iostream>
#include <string>
#include "daos/daoManager.hpp"
#include "managers/consultaManager.hpp"
#include "managers/funcionarioManager.hpp"
#include "managers/encaminhamentoManager.hpp"
#include "managers/exameManager.hpp"
#include "entidades/data.hpp"
#include <windows.h>
#include <limits>
#include <type_traits>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    try
    {

        DaoManager daoManager;
        FuncionarioManager funcionarioManager = FuncionarioManager(&daoManager);
        EncaminhamentoManager encaminhamentoManager = EncaminhamentoManager(&daoManager);
        ExameManager exameManager = ExameManager(&daoManager);
        ConsultaManager consultaManager = ConsultaManager(&daoManager, &exameManager);

        int escolha = -1;
        while (escolha != 0)
        {
            std::cout << "----------------------------------" << std::endl;
            std::cout << "Escolha uma das opcoes abaixo" << std::endl;
            std::cout << "1 - Realizar consulta" << std::endl;
            std::cout << "2 - Inserir resultado de exame" << std::endl;
            std::cout << "0 - Encerrar programa" << std::endl;
            std::cout << ">> ";
            std::cin >> escolha;

            switch (escolha)
            {
            case 1:
            {

                // incluiria o caso checar agenda, onde seria possível selecionar a consulta
                int idConsulta = 0;

                int achou = 0;
                while (!achou)
                {
                    std::cout << "Digite o id da consulta que voce deseja realizar" << std::endl;
                    std::cout << ">> ";
                    std::cin >> idConsulta;
                    std::cin.ignore();
                    std::vector<Consulta> consultas = daoManager.getConsultaDao()->list();
                    for (std::size_t i = 0; i < consultas.size(); i++)
                    {
                        if (idConsulta == consultas[i].getIdConsulta())
                        {
                            achou = 1;
                        }
                    }
                    if (!achou)
                    {
                        std::cout << "Consulta não encontrada, digite novamente!!!!" << std::endl;
                    }
                }
                Consulta consulta = consultaManager.getConsulta(idConsulta);
                std::cout << "Dados da consulta selecionada:" << std::endl;
                consulta.toString();

                achou = 0;
                std::string anamnese = "";
                std::cout << "Insira a anamnese" << std::endl;
                std::cout << ">> ";
                std::cin.ignore();
                std::getline(std::cin, anamnese);

                float peso = 0;
                while (achou == 0)
                {
                    std::cout << "Insira o peso: ";
                    std::cin >> peso;

                    if (std::cin.fail())
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Peso inválido!!!!" << std::endl;
                    }
                    else
                    {
                        achou = 1;
                    }
                }
                consultaManager.setConsulta(idConsulta, anamnese, peso);
                int i = 0;
                achou = 0;
                while (!achou)
                {

                    std::cout << "Deseja inserir um pedido de exame?" << std::endl;
                    std::cout << "Digite 0 para 'não' e 1 para 'sim'" << std::endl;
                    std::cout << ">> ";
                    std::cin >> i;
                    if (i != 0 && i != 1)
                    {
                        std::cout << "Digito inválido" << std::endl;
                    }
                    else
                    {
                        achou = 1;
                    }
                }

                if (i == 1)
                {
                    std::cout << std::endl;
                    std::cout << "---- Médicos veterinários ----" << std::endl;
                    int idRequisitado = 0;
                    std::string crmv;
                    std::vector<Veterinario> listaVeterinarios = daoManager.getVeterinarioDao()->list();

                    for (size_t i = 0; i < listaVeterinarios.size(); i++)
                    {
                        std::cout << ":. CRMV - " << listaVeterinarios[i].getCrmv() << " - " << listaVeterinarios[i].getNome() << std::endl;
                    }
                    std::cout << std::endl;
                    Veterinario *requisitor;
                    achou = 0;
                    while (!achou)
                    {
                        std::cout << "Selecione o médico requisitor pelo crmv:" << std::endl;

                        std::cout << ">> ";
                        std::cin >> crmv;
                        requisitor = daoManager.getVeterinarioDao()->retrieve(crmv);
                        if (requisitor == nullptr)
                        {
                            std::cout << "Erro: Veterinário não encontrado!" << std::endl;
                        }
                        else
                        {
                            achou = 1;
                        }
                    }

                    std::cout << std::endl;
                    std::cout << "---- Médicos imaginologistas ----" << std::endl;

                    std::vector<Funcionario> listaImaginologistas = funcionarioManager.listImaginologistas();

                    for (size_t i = 0; i < listaImaginologistas.size(); i++)
                    {
                        std::cout << ":. " << listaImaginologistas[i].getIdFuncionario() << " - " << listaImaginologistas[i].getNome() << std::endl;
                    }
                    std::cout << std::endl;

                    Funcionario *requisitado;
                    achou = 0;
                    while (!achou)
                    {
                        std::cout << "Selecione o médico requisitado pelo id:" << std::endl;

                        std::cout << ">> ";
                        std::cin >> idRequisitado;

                        requisitado = daoManager.getFuncionarioDao()->retrieve(idRequisitado);
                        if (requisitado == nullptr)
                        {
                            std::cout << "Funcionário não encontrado!" << std::endl;
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                        else
                        {
                            achou = 1;
                        }
                    }

                    std::string documentoExame = "";
                    std::cout << "Insira o corpo do documento" << std::endl;
                    std::cout << ">> ";
                    std::cin.ignore();
                    std::getline(std::cin, documentoExame);

                    Data dataAtual;
                    dataAtual.obterDataAtual();

                    int quantidadeExames = 0;
                    std::cout << "Insira a quantidade de exames: " << std::endl;
                    std::cout << ">> ";
                    std::cin >> quantidadeExames;

                    while (quantidadeExames <= 0)
                    {
                        std::cout << "Insira uma quantidade de exames válida: " << std::endl;
                        std::cout << ">> ";
                        std::cin >> quantidadeExames;
                    }

                    consultaManager.setPedidoExame(idConsulta, documentoExame, requisitor, requisitado, dataAtual, quantidadeExames);
                }

                consultaManager.encerrarConsulta(idConsulta);
            }

            break;
            case 2:
            {
                int op = 1;
                while (op == 1)
                {
                    int idEncaminhamento = 0;
                    int idExame = 0;
                    // o usuario clicaria no encaminhamento originalmente
                    int achou = 0;
                    while (!achou)
                    {
                        std::cout << "Digite o id do encaminhamento do exame:" << std::endl;
                        std::cout << ">> ";
                        std::cin >> idEncaminhamento;
                        std::cin.ignore();
                        std::vector<Encaminhamento> encaminhamentos = daoManager.getEncaminhamentoDao()->list();
                        for (std::size_t i = 0; i < encaminhamentos.size(); i++)
                        {
                            if (idEncaminhamento == encaminhamentos[i].getIdEncaminhamento())
                            {
                                achou = 1;
                            }
                        }
                        if (!achou)
                        {
                            std::cout << "Encaminhamento inválido!!!!" << std::endl;
                        }
                    }

                    std::vector<Exame> listaExames = encaminhamentoManager.listExamesDoEncaminhamento(idEncaminhamento);
                    std::cout << std::endl;
                    std::cout << "---- Exames ----" << std::endl;
                    for (size_t i = 0; i < listaExames.size(); i++)
                    {
                        std::cout << ":. " << listaExames[i].getIdExame() << " - " << listaExames[i].getAnimalDoExame()->getNome() << " - " << listaExames[i].getStatus() << std::endl;
                    }
                    std::cout << std::endl;

                    achou = 0;
                    while (!achou)
                    {
                        std::cout << "Digite o id do exame:" << std::endl;
                        std::cout << ">> ";
                        std::cin >> idExame;
                        for (std::size_t i = 0; i < listaExames.size(); i++)
                        {
                            if (idExame == listaExames[i].getIdExame())
                            {
                                achou = 1;
                            }
                        }
                        if (!achou)
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Exame inválido!!!!" << std::endl;
                        }
                    }

                    std::string resultado = "";
                    std::cout << "Insira o resultado do exame:" << std::endl;
                    std::cout << ">> ";
                    std::cin.ignore();
                    std::getline(std::cin, resultado);

                    achou = 0;
                    Data dataRealizado;
                    while (!achou)
                    {
                        int dia = 0;
                        int mes = 0;
                        int ano = 0;
                        std::cout << "Insira a data de realização (DD MM YYYY):" << std::endl;
                        std::cout << ">> ";
                        std::cin >> dia >> mes >> ano;
                        dataRealizado = Data{dia, mes, ano};
                        if (std::cin.fail())
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Data inválida!!!!" << std::endl;
                        }
                        else
                        {
                            achou = 1;
                        }
                    }

                    exameManager.setResultadoExame(idExame, resultado, dataRealizado);
                    std::cout << "Resultado inserido com sucesso!" << std::endl;

                    std::cout << "Digite o valor: " << std::endl;
                    std::cout << "1 - Continuar inserindo resultados de exames;" << std::endl;
                    std::cout << "0 - Voltar ao menu principal;" << std::endl;
                    std::cout << ">> ";
                    std::cin >> op;
                }

                break;
            }
            case 0:
                std::cout << "Programa finalizado";
                break;

            default:
                break;
            }
        }
    }
    catch (const char *e)
    {
        std::cerr << "Erro: " << e << std::endl;
        return 1;
    }

    return 0;
}