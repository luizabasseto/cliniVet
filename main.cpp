#include <iostream>
#include <string>

int main()
{
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
        case 0:
            std::cout <<"Programa finalizado";
            break;

        default:
            break;
        }
    }
    return 0;
}