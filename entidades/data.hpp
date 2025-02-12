#include <iostream>
#include <string>
#ifndef DATA_HPP
#define DATA_HPP

#pragma once

class Data{
    int dia;
    int mes;
    int ano;

    public:
        Data(int d, int m, int a);
        Data();
    // Função para converter a data para string
    std::string toString();
};
#endif // DATA_HPP