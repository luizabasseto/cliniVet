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

void EncaminhamentoManager::listEncaminhamentos() {
    std::vector<Encaminhamento> encaminhamentos = daoManager->getEncaminhamentoDao()->list();
    if (encaminhamentos.empty()) {
        std::cout << "Nenhum encaminhamento cadastrado.\n";
        return;
    }

    std::cout << "Lista de Encaminhamentos:\n";
    for (Encaminhamento& e : encaminhamentos) {
        std::cout << e.toString() << std::endl;
    }
}

Encaminhamento* EncaminhamentoManager::getEncaminhamento(int idEncaminhamento) {
    return daoManager->getEncaminhamentoDao()->retrieve(idEncaminhamento);
}
