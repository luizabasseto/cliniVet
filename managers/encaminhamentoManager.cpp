#include "encaminhamentoManager.hpp"
#include "../daos/daoManager.hpp"
#include <iostream>

EncaminhamentoManager::EncaminhamentoManager(DaoManager* daoM) : daoManager(daoM) {}

void EncaminhamentoManager::createEncaminhamento(Data dataRequisicao, std::string documentoRequisicao, Funcionario* recebeRequisicao, Veterinario* requisitor) {
    std::vector<Encaminhamento> encaminhamentos = daoManager->getEncaminhamentoDao()->list();
    int id = encaminhamentos.size() + 1;
    Encaminhamento novoEncaminhamento(id, dataRequisicao, documentoRequisicao, recebeRequisicao, requisitor);
    daoManager->getEncaminhamentoDao()->create(novoEncaminhamento);
    std::cout << "Encaminhamento criado com sucesso!\n";
}

std::vector<Encaminhamento> EncaminhamentoManager::listEncaminhamentos() {
    std::vector<Encaminhamento> encaminhamentos = daoManager->getEncaminhamentoDao()->list();
    if (encaminhamentos.empty()) {
        std::cout << "Nenhum encaminhamento cadastrado.\n";
        return std::vector<Encaminhamento>();
    }
    
    return encaminhamentos;
}

Encaminhamento* EncaminhamentoManager::getEncaminhamento(int idEncaminhamento) {
    return daoManager->getEncaminhamentoDao()->retrieve(idEncaminhamento);
}

std::vector<Exame> EncaminhamentoManager::listExamesDoEncaminhamento(int idEncaminhento){
    std::vector<Exame> exames = daoManager->getExameDao()->list();
    std::vector<Exame> examesSelecionados;

    if (exames.empty()) {
        std::cout << "Nenhum exame cadastrado para este encaminhamento." << std::endl;
        return examesSelecionados;
    }
    
    for (Exame exame : exames) {  
        if (exame.getEncaminhamento()->getIdEncaminhamento() == idEncaminhento) {
            examesSelecionados.push_back(exame);
        }
    }

    return examesSelecionados;
}

