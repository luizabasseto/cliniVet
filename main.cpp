#include <iostream>
#include <string>
#include "daos/daoManager.hpp"
#include "managers/consultaManager.hpp"

int main()
{
    try
    {

        DaoManager daoManager;
        ConsultaManager consultaManager = ConsultaManager(&daoManager);

        int escolha = -1;
        while (escolha != 0)
        {
            std::cout << "Escolha uma das opcoes abaixo" << std::endl;
            ;
            std::cout << "1 - Realizar consulta" << std::endl;
            ;
            std::cout << "0 - Encerrar programa" << std::endl;
            ;
            std::cout << ">> " << std::endl;
            ;
            std::cin >> escolha;

            switch (escolha)
            {
            case 1:
            {

                // incluiria o caso checar agenda, onde seria possível selecionar a consulta
                int idConsulta = 0;
                std::cout << "Digite o id da consulta que voce deseja realizar" << std::endl;
                std::cout << ">> " << std::endl;

                std::cin >> idConsulta;
                consultaManager.getConsulta(idConsulta);

                std::string anamnese = "";
                std::cout << "Insira a anamnese" << std::endl;
                std::cout << ">> " << std::endl;
                std::getline(std::cin, anamnese);

                float peso = 0;
                std::cout << "Insira o peso" << std::endl;
                std::cout << ">> " << std::endl;

                std::cin >> peso;
                int i = 0;
                std::cout << "Deseja inserir um pedido de exame?" << std::endl;
                std::cout << "Digite 0 para não e 1 para sim" << std::endl;
                std::cout << ">> " << std::endl;
                std::cin >> i;

                if (i == 1)
                {
                    int requisitado = 0, requisitor = 0;
                    std::cout << "Selecione o médico requisitor" << std::endl;
                    // adicionar listMedicosVeterinarios
                    std::cout << ">> " << std::endl;
                    std::cin >> requisitor;

                    std::cout << "Selecione o médico requisitado" << std::endl;
                    // adicionar listMedicosImaginologistas
                    std::cout << ">> " << std::endl;
                    std::cin >> requisitado;

                    std::string documentoExame = "";
                    std::cout << "Insira o corpo do documento" << std::endl;
                    std::cout << ">> " << std::endl;
                    std::getline(std::cin, documentoExame);

                    // o sistema registra a dataRequisicao como a data atual
                    consultaManager.setPedidoExame(idConsulta, documentoExame, requisitor, requisitado, {11, 2, 2025});
                }

                std::cout << "Deseja encerrar a consulta?" << std::endl;
                std::cout << "Digite 0 para não e 1 para sim" << std::endl;
                if (i == 1)
                {
                    consultaManager.encerrarConsulta(idConsulta);
                    std::cout << ">> " << std::endl;
                    std::cin >> i;
                }
            }

            break;
            case 2:

                break;
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
        std::cout << "Nao foi possivel executar: " << e;
        return 1;
    }

    return 0;
}