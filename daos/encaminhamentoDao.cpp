#include "encaminhamentoDao.hpp"

void EncaminhamentoDao::create(Encaminhamento encaminhamento){
    encaminhamentos.push_back(encaminhamento);
}

void EncaminhamentoDao::update(int idEncaminhamento, Encaminhamento encaminhamento){
    for (int i = 0; i < encaminhamentos.size(); i++)
    {
        if (encaminhamentos[i].getIdEncaminhamento()==idEncaminhamento)
        {
            encaminhamentos[i] = encaminhamento;
        }
        
    }
    
}

void EncaminhamentoDao::remove(int idEncaminhamento){

    for (int i = 0; i < encaminhamentos.size(); i++)
    {
        if (encaminhamentos[i].getIdEncaminhamento()==idEncaminhamento)
        {
            encaminhamentos.erase(encaminhamentos.begin()+i);
        }
        
    }
}

Encaminhamento EncaminhamentoDao::retrieve(int idEncaminhamento){
    for (int i = 0; i < encaminhamentos.size(); i++)
    {
        if (encaminhamentos[i].getIdEncaminhamento()==idEncaminhamento)
        {
            return encaminhamentos[i];
        }
        
    }
}

std::vector<Encaminhamento> EncaminhamentoDao::list(){
    return encaminhamentos;
}