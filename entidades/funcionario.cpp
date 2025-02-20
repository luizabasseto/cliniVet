#include <iostream>
#include <string>
#include "funcionario.hpp"
#include "animal.hpp"
#include "data.hpp"

Funcionario::Funcionario(int idFuncionario, std::string nome, Data dataEntrada, Data dataSaida, char status, Cargo cargo){
    this->id = idFuncionario;
    this->nome = nome;
    this->dataEntrada = dataEntrada;
    this->dataSaida = dataSaida;
    this->status = status;
    this->cargo = cargo;
}

std::string toStringCargo(Cargo cargo) {
    switch (cargo) {
        case IMAGINOLOGISTA: return "Imaginologista";
        case SECRETARIA: return "Secretária";
        case ATENDENTE: return "Atendente";
        case ADMINISTRATIVO: return "Administrativo";
        case MEDICO: return "Médico Veterinário";
        default: return "Desconhecido";
    }
}

int Funcionario::getIdFuncionario() { 
    return id; 
}

void Funcionario::setIdFuncionario(int idFuncionario) { 
    this->id = idFuncionario; 
}

std::string Funcionario::getNome() { 
    return nome; 
}

void Funcionario::setNome(std::string nome) { 
    this->nome = nome; 
}

Data Funcionario::getDataEntradaFuncionario() { 
    return dataEntrada; 
}

void Funcionario::setDataEntradaFuncionario(Data dataEntrada) { 
    this->dataEntrada = dataEntrada; 
}

Data Funcionario::getDataSaidaFuncionario() { 
    return dataSaida; 
}

void Funcionario::setDataSaidaFuncionario(Data dataSaida) { 
    this->dataSaida = dataSaida; 
}

char Funcionario::getStatus() { 
    return status; 
}

void Funcionario::setStatus(char status) { 
    this->status = status; 
}

Cargo Funcionario::getCargo()  {
    return cargo;
}

void Funcionario::setCargo(Cargo cargo) { 
    this->cargo = cargo; 
}


Funcionario* Funcionario::getFuncionario() {
    return this;
}

void Funcionario::setFuncionario(Funcionario* funcionario) {
    if (funcionario != nullptr) {
        this->id = funcionario->getIdFuncionario();
        this->nome = funcionario->getNome();
        this->dataEntrada = funcionario->getDataEntradaFuncionario();
        this->dataSaida = funcionario->getDataSaidaFuncionario();
        this->status = funcionario->getStatus();
        this->cargo = funcionario->getCargo();
    } else {
        throw std::invalid_argument("Funcionario não pode ser nulo.");
    }
}

std::string Funcionario::toString() {
    std::string str;
    str += "Funcionario ID: " + std::to_string(id) + "\n";
    str += "Nome: " + nome + "\n";
    str += "Data de Entrada: " + dataEntrada.toString() + "\n";
    str += "Data de Saida: " + dataSaida.toString() + "\n";
    str += "Status: " + std::string(1, status == 'F' ? 'F' : 'N') + "\n"; //feito=F n-não feito
    str += "Cargo: " + toStringCargo(cargo) + "\n";
    return str;
}