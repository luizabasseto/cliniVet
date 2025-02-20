#include <iostream>
#include <vector>
#include "../daos/daoManager.hpp"
#include "exameManager.hpp"

ExameManager::ExameManager(DaoManager* daoM) : daoManager(daoM) {}

Exame* ExameManager::getExame(int idExame){
    Exame* exame = daoManager->getExameDao()->retrieve(idExame);
    return exame;  
}

//na
void ExameManager::setResultadoExame(int idExame, std::string documentoExame, Data dataRealizado) {
    Exame* exame = daoManager->getExameDao()->retrieve(idExame);
    if (exame->getStatus() == 'N') {
        exame->setDocumentoExame(documentoExame);
        exame->setStatus('F'); // F = Feito
        exame->setDataExame(dataRealizado);
    } else {
        std::cout << "Este exame já foi registrado." << std::endl;
    }
}

void ExameManager::criarExameDePedido(int idEncaminhamento, Animal* animal){
    std::vector<Exame> exames = daoManager->getExameDao()->list();
    Encaminhamento* encaminhamento = daoManager->getEncaminhamentoDao()->retrieve(idEncaminhamento);
    Exame exame = Exame(exames.size(), {0,0,0}, animal, encaminhamento, "Não realizado", 'N');
    daoManager->getExameDao()->create(exame);
}