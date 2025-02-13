#include <iostream>
#include <string>
#include "veterinario.hpp"

Veterinario::Veterinario(int idV, Data dataEntrada, Data dataSaida, char status, std::string crmv)
    : Funcionario(idV, dataEntrada, dataSaida, status), crmv(crmv) {}


std::string Veterinario::getCrmv() {
    return this->crmv;
}

void Veterinario::setCrmv(std::string crmv) {
    if (!crmv.empty()) {  // Validação para evitar CRMV vazio
        this->crmv = crmv;
    } else {
        throw std::invalid_argument("CRMV não pode ser vazio.");
    }
}

Veterinario* Veterinario::getVeterinario() {
    return this;
}

void Veterinario::setVeterinario(Veterinario* veterinario) {
    if (veterinario != nullptr) {  
        this->setIdFuncionario(veterinario->getIdFuncionario());
        this->setDataEntradaFuncionario(veterinario->getDataEntradaFuncionario());
        this->setDataSaidaFuncionario(veterinario->getDataSaidaFuncionario());
        this->setStatus(veterinario->getStatus());
        this->setCrmv(veterinario->getCrmv());
    } else {
        throw std::invalid_argument("Veterinário inválido.");
    }
}


void Veterinario::toString(){
     std::cout << "CRMV: " << crmv << std::endl;
     std::cout << "Funcionário ID: " << getIdFuncionario() << std::endl;
 }
 