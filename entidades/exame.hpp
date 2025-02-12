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
    int idAnimal; 
    int idEncaminhamento;
    

public:
    Exame(int idExame, Data dataRealizado, int idAnimal, int idEncaminhamento, std::string resultado, char status);
    int getIdExame();
    void setIdExame(int idExamed);

    Data getDataExame();
    void setDataExame(Data dataRealizado);

    int getIdAnimalDoExame();
    void setIdAnimalDoExame(int idAnimal);

    int getIdEncaminhamento();
    void setIdEncaminhamento(int idEncaminhamento);

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