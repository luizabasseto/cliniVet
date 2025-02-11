#include <iostream>
#include <vector>
#include "animal.hpp"
#include "encaminhamento.hpp"

#pragma once

class Exame{
    int id;
    Data dataRealizado;
    std::string resultado;
    char status;
    Animal* animal;
    Encaminhamento* encaminhamento;
    

public:
    Exame(int idExame, Data dataRealizado, Animal* animal, Encaminhamento* encaminhamento, std::string resultado, char status);
    int getIdExame();
    void setIdExame(int idExamed);

    Data getDataExame();
    void setDataExame(Data dataRealizado);

    Animal* getAnimalDoExame();
    void setAnimalDoExame(Animal* animal);

    Encaminhamento* getEncaminhamento();
    void setEncaminhamento(Encaminhamento* encaminhamento);

    std::string getResultado();
    void setResultado(std::string peso);

    char getStatus();
    void setStatus(char status);

    void toString();
    Exame* getExame();
    void setExame(Exame* exame);

    void criarExame(); 
    void setResultadoExame(); 

};