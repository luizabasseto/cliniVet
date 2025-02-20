#pragma once
#include <iostream>
#include <vector>
#include "../entidades/exame.hpp"
#include "../daos/daoManager.hpp"

class ExameManager{
    DaoManager* daoManager;
    
    public: 
        ExameManager(DaoManager* daoManager);
        void criarExameDePedido(int Encaminhamento, Animal* animal);
        Exame* getExame(int idExame);
        void setResultadoExame(int idExame, std::string documentoExame, Data dataRealizado);
};