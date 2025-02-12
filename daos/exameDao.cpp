#include "exameDao.hpp"

void ExameDao::create(Exame exame){
    exames.push_back(exame);
}

void ExameDao::update(int idExame, Exame exame){
    for (int i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            exames[i] = exame;
        }
    }
}

void ExameDao::remove(int idExame){
    for (int i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            exames.erase(exames.begin()+i);
        }
    }
}

Exame ExameDao::retrieve(int idExame){
    for (int i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            return exames[i];
        }
    }
}

std::vector<Exame> ExameDao::list(){
    return exames;
}