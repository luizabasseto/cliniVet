#include <iostream>
#include <vector>
#include "consultaManager.hpp"
#include "../entidades/encaminhamento.hpp"
#include "../entidades/exame.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"

ExameManager::ExameManager(DaoManager* daoM) : daoManager(daoM) {}

void ExameManager::getExame(int idExame){
    Exame exame = daoManager->getExameDao()->retrieve(idExame);
    std::cout<<"Dados do exame selecionado:" << std::endl;
    exame.toString();  
}

//esse método é usado para criar um exame quando o encaminhamento é feito
void Exame::criarExame() {
    this->resultado = "";
    this->status = 'N'; // N = Não feito
    std::cout << "Exame criado com sucesso!" << std::endl;
}

//esse método é usado quando o resultado ficou pronto
void Exame::setResultadoExame() {
    if (status == 'N') {
        std::cout << "Digite o resultado do exame: ";
        std::getline(std::cin, resultado);
        status = 'F'; // F = Feito
        std::cout << "Resultado registrado com sucesso!" << std::endl;
    } else {
        std::cout << "Este exame já foi registrado." << std::endl;
    }
}