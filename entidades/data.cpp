#include  <iostream>
#include "data.hpp"

Data::Data(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->ano = a;
}

std::string Data::toString(){
    return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}