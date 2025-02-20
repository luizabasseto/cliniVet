#include <iostream>
#include <string>
#include "daos/daoManager.hpp"
#include "managers/consultaManager.hpp"
#include "managers/funcionarioManager.hpp"
#include "managers/encaminhamentoManager.hpp"
#include "managers/exameManager.hpp"
#include "entidades/data.hpp"

int main()
{
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
                std::cout << "Digite o id da consulta que voce deseja realizar" << std::endl;
                std::cout << ">> ";

                std::cin >> idConsulta;
                std::cin.ignore();
                Consulta consulta = consultaManager.getConsulta(idConsulta);
                std::cout << "Dados da consulta selecionada:" << std::endl;
                consulta.toString();

                std::string anamnese = "";
                std::cout << "Insira a anamnese" << std::endl;
                std::cout << ">> ";
                std::cin.ignore();
                std::getline(std::cin, anamnese);

                float peso = 0;
                std::cout << "Insira o peso" << std::endl;
                std::cout << ">> ";

                consultaManager.setConsulta(idConsulta, anamnese, peso);

                std::cin >> peso;
                int i = 0;
                std::cout << "Deseja inserir um pedido de exame?" << std::endl;
                std::cout << "Digite 0 para 'Não' e 1 para 'Sim'" << std::endl;
                std::cout << ">> ";
                std::cin >> i;

                if (i == 1)
                {
                    int idRequisitado = 0;
                    std::string crmv;

                    std::cout << "Selecione o médico requisitor pelo crmv:" << std::endl;

                    std::vector<Veterinario> listaVeterinarios = daoManager.getVeterinarioDao()->list();

                    for (size_t i = 0; i < listaVeterinarios.size(); i++)
                    {
                        std::cout << ":. " << listaVeterinarios[i].getCrmv() << " - " << listaVeterinarios[i].getNome();
                    }

                    std::cout << ">> ";
                    std::cin.ignore();
                    std::getline(std::cin, crmv);

                    std::cout << "Selecione o médico requisitado pelo id:" << std::endl;

                    std::vector<Funcionario> listaImaginologistas = funcionarioManager.listImaginologistas();

                    for (size_t i = 0; i < listaImaginologistas.size(); i++)
                    {
                        std::cout << ":. " << listaImaginologistas[i].getIdFuncionario() << " - " << listaImaginologistas[i].getNome();
                    }

                    std::cout << ">> ";
                    std::cin >> idRequisitado;

                    std::string documentoExame = "";
                    std::cout << "Insira o corpo do documento" << std::endl;
                    std::cout << ">> ";
                    std::cin.ignore();
                    std::getline(std::cin, documentoExame);

                    Veterinario *requisitor = daoManager.getVeterinarioDao()->retrieve(crmv);
                    if (!requisitor)
                    {
                        std::cerr << "Erro: Veterinário não encontrado!" << std::endl;
                        continue;
                    }

                    Funcionario *requisitado = daoManager.getFuncionarioDao()->retrieve(idRequisitado);
                    if (!requisitado)
                    {
                        std::cerr << "Erro: Funcionário não encontrado!" << std::endl;
                        continue;
                    }
                    Data dataAtual;
                    dataAtual.obterDataAtual();

                    int quantidadeExames = 0;
                    std::cout << "Insira a quantidade de exames: " << std::endl;
                    std::cout << ">> ";
                    std::cin >> quantidadeExames;

                    while (quantidadeExames <= 0){
                        std::cout << "Insira uma quantidade de exames válida: " << std::endl;
                        std::cout << ">> ";
                        std::cin >> quantidadeExames;
                    }
                    
                    consultaManager.setPedidoExame(idConsulta, documentoExame, requisitor, requisitado, dataAtual, quantidadeExames);
                }

                std::cout << "Deseja encerrar a consulta?" << std::endl;
                std::cout << "Digite 0 para não e 1 para sim" << std::endl;
                std::cout << ">> ";
                std::cin >> i;

                if (i == 1)
                {
                    consultaManager.encerrarConsulta(idConsulta);
                }
            }

            break;
            case 2:
            {
                int op = 1;
                while (op == 1){
                    int idEncaminhamento = 0;
                    int idExame = 0;
                    // o usuario clicaria no encaminhamento originalmente
                    std::cout << "Digite o id do encaminhamento do exame:" << std::endl;
                    std::cout << ">> ";
                    std::cin >> idEncaminhamento;
                    std::cin.ignore();

                    std::vector<Exame> listaExames = encaminhamentoManager.listExamesDoEncaminhamento(idEncaminhamento);

                    for (size_t i = 0; i < listaExames.size(); i++)
                    {
                        std::cout << ":. " << listaExames[i].getIdExame() << " - " << listaExames[i].getAnimalDoExame() << " - " << listaExames[i].getStatus();
                    }

                    std::cout << "Digite o id do exame:" << std::endl;
                    std::cout << ">> ";
                    std::cin >> idExame;

                    std::string resultado = "";
                    std::cout << "Insira o resultado do exame:" << std::endl;
                    std::cout << ">> ";
                    std::cin.ignore();
                    std::getline(std::cin, resultado);

                    int dia = 0;
                    int mes = 0;
                    int ano = 0;
                    std::cout << "Insira a data de realização (DD MM YYYY):" << std::endl;
                    std::cout << ">> ";
                    std::cin >> dia >> mes >> ano;
                    Data dataRealizado = Data{dia, mes, ano};

                    exameManager.setResultadoExame(idExame, resultado, dataRealizado);
                    std::cout << "Resultado inserido com sucesso!" << std::endl;

                    int op = 0;
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