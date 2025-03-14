#include <iostream>
#include <string>
#include "veterinario.hpp"

Veterinario::Veterinario(int idV, std::string nome, Data dataEntrada, Data dataSaida, char status, Cargo cargo, std::string crmv)
    : Funcionario(idV, nome, dataEntrada, dataSaida, status, cargo), crmv(crmv) {}


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



std::string Veterinario::toString() {
    std::string str;
    str += "CRMV: " + crmv + "\n";
    str += "Funcionário ID: " + std::to_string(getIdFuncionario()) + "\n";
    return str;
}