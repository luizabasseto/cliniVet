#include <iostream>
#include <string>
#include "daos/daoManager.hpp"

int main(){
    try {

    // ManagerDao managerDao;

    int escolha = -1;
    while (escolha != 0){
        std::cout << "Escolha uma das opcoes abaixo\n";
        std::cout << "1 - Realizar consulta\n";
        std::cout << "0 - Encerrar programa\n";
        std::cout << "\n>> ";
        std::cin >> escolha;
        switch (escolha)
        {
        case 1:

            break;
        case 2:
        
        case 0:
            std::cout <<"Programa finalizado";
            break;

        default:
            break;
        }
    }
    
    } catch(const char *e) {
        std::cout << "Nao foi possivel executar: " << e;
        return 1;
    }

    return 0;
}