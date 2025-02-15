
#include <string>  // Para usar string
#include <iostream>  // Para usar cout
#include "data.hpp"

#pragma once

class Animal {
private:
    int id;
    std::string nome;
    Data dataNascimento;
    char sexo;  

public:
    Animal(int id, std::string nome, Data dataNascimento, char sexo);
    Animal();
    int getId();
    void setId(int id);
    std::string getNome();
    void setNome(std::string nome);
    Data getDataNascimento();
    void setDataNascimento(Data dataNascimento);
    char getSexo();
    void setSexo(char sexo);
    std::string toString();
    
    void gerarHistoricoMedico();
};