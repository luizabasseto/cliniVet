#include  <iostream>
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

std::string Data::toString(){
    return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}