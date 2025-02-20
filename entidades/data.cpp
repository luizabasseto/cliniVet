#include  <iostream>
#include <ctime>
#include "data.hpp"

Data::Data(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->ano = a;
}
Data::Data(){
    this->dia = 0;
    this->mes = 0;
    this->ano = 0;
}

void Data::obterDataAtual() {
    time_t t = time(nullptr);
    struct tm tm = *localtime(&t);

    dia = tm.tm_mday;
    mes = tm.tm_mon + 1;
    ano = tm.tm_year + 1900;
}


std::string Data::toString(){
    return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}