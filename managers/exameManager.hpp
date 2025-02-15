#pragma once
#include <iostream>
#include <vector>
#include "../entidades/exame.hpp"
#include "../daos/daoManager.hpp"

class ExameManager{
    DaoManager* daoManager;
    
    public: 
        ExameManager(DaoManager* daoManager);

        void getExame(int idExame);

        void criarExame();

        void setResultadoExame();
};