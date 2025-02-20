#include <iostream>
#include <vector>
#include "animal.hpp"
#include "encaminhamento.hpp"
#include "data.hpp"

#pragma once

class Exame{
    int id;
    Data dataRealizado;
    std::string documentoExame;
    char status;
    Animal* animal; 
    Encaminhamento* encaminhamento;
    

public:
    Exame(int idExame, Data dataRealizado, Animal* animal, Encaminhamento* encaminhamento, std::string documentoExame, char status);
    Exame();
    int getIdExame();
    void setIdExame(int idExame);

    Data getDataExame();
    void setDataExame(Data dataRealizado);

    Animal* getAnimalDoExame();
    void setAnimalDoExame(Animal* animal);

    Encaminhamento* getEncaminhamento();
    void setEncaminhamento(Encaminhamento* encaminhamento);

    std::string getDocumentoExame();
    void setDocumentoExame(std::string documentoExame);

    char getStatus();
    void setStatus(char status);

    void toString();
    Exame* getExame();
    void setExame(Exame* exame);

};