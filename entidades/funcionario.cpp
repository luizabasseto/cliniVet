#include <iostream>
#include <string>
#include "funcionario.hpp"
#include "animal.hpp"
#include "data.hpp"

Funcionario::Funcionario(int idFuncionario, Data dataEntrada, Data dataSaida, char status){
    this->id = idFuncionario; 
    this->dataEntrada = dataEntrada;
    this->dataSaida = dataSaida;
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
    std::cout << "Data de Entrada: " << dataEntrada.toString() << "\n";
    std::cout << "Data de Saida: " << dataSaida.toString() << "\n";
    std::cout << "Status: " << (status == 'F' ? "Feito" : "Não feito") << "\n";
}


