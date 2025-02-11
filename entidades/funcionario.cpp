#include <iostream>
#include <string>
#include "funcionario.hpp"

Funcionario::Funcionario(int idFuncionario, Data dataEntrada, Data dataSaida, char status) {
    this->id = idFuncionario; 
    this->dataEntrada = dataEntrada;
    this->dataSaida = Pessoa;
    this->status = status;
}

int Funcionario::getIdFuncionario() { 
    return id; 
}

void Funcionario::setIdFuncionario(int idFuncionario) { 
    this->id = idFuncionario; 
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
    this->dataEntrada = dataSaida; 
}

char Funcionario::getStatus() { 
    return status; 
}

void Funcionario::setStatus(char status) { 
    this->status = status; 
}

void Funcionario::toString() {
    std::cout << "Funcionario ID: " << id << "\n";
    std::cout << "Data de Entrada: " << dataEntrada.dia << "/" << dataEntrada.mes << "/" << dataEntrada.ano << "\n";
    std::cout << "Data de Saida: " << dataSaida.dia << "/" << dataSaida.mes << "/" << dataSaida.ano << "\n";
    std::cout << "Status: " << (status == 'F' ? "Feito" : "Não feito") << "\n";
}

Funcionario* Funcionario::getFuncionario() { 
    return this; 
}

void Funcionario::setFuncionario(Funcionario* Funcionario) {
    this->id = Funcionario->id;
    this->dataEntrada = Funcionario->dataEntrada;
    this->dataSaida = Funcionario->dataSaida;
    this->status = Funcionario->status;
}

void Funcionario::criarFuncionario() {
    this->status = 'N'; // N = Não feito
    std::cout << "Funcionario criado com sucesso!" << std::endl;
}

void Funcionario::registrarResultado() {
    if (status == 'N') {
        std::cout << "Digite o resultado do Funcionario: ";
        std::getline(std::cin, resultado);
        status = 'F'; // F = Feito
        std::cout << "Resultado registrado com sucesso!" << std::endl;
    } else {
        std::cout << "Este Funcionario já foi registrado." << std::endl;
    }
}
