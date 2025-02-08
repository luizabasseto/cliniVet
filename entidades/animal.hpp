
#include <string>  // Para usar string
#include <iostream>  // Para usar cout

#pragma once

// Estrutura para representar a data de nascimento
struct Data {
    int dia;
    int mes;
    int ano;
};

class Animal {
private:
    int id;
    std::string nome;
    Data dataNascimento;
    char sexo;  

public:
    Animal(int id, std::string nome, Data dataNascimento, char sexo);
    int getId();
    void setId(int id);
    std::string getNome();
    void setNome(std::string nome);
    Data getDataNascimento();
    void setDataNascimento(Data dataNascimento);
    char getSexo();
    void setSexo(char sexo);
    void toString();
    
    void gerarHistoricoMedico();
};