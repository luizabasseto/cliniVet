#include <iostream>
#include <string>
class Data{
    int dia;
    int mes;
    int ano;

    public:
        Data(int d, int m, int a);

    // Função para converter a data para string
    std::string toString();
};