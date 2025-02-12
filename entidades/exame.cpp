#include <iostream>
#include <string>
#include "exame.hpp"

Exame::Exame(int idExame, Data dataRealizado, int idAnimal, int idEncaminhamento, std::string resultado, char status) {
    this->id = idExame; 
    this->dataRealizado = dataRealizado;
    this->idAnimal = idAnimal;
    this->idEncaminhamento = idEncaminhamento;
    this->resultado = resultado;
    this->status = status;
}

int Exame::getIdExame() { 
    return id; 
}

void Exame::setIdExame(int idExame) { 
    this->id = idExame; 
}

Data Exame::getDataExame() { 
    return dataRealizado; 
}

void Exame::setDataExame(Data dataRealizado) { 
    this->dataRealizado = dataRealizado; 
}

int Exame::getIdAnimalDoExame() {
    return idAnimal;
}

void Exame::setIdAnimalDoExame(int idAnimal) {
    this->idAnimal = idAnimal;
}

int Exame::getIdEncaminhamento() {
    return idEncaminhamento;
}

void Exame::setIdEncaminhamento(int idEncaminhamento) {
    this->idEncaminhamento = idEncaminhamento;
}

std::string Exame::getResultado() { 
    return resultado; 
}

void Exame::setResultado(std::string resultado) { 
    this->resultado = resultado; 
}

char Exame::getStatus() { 
    return status; 
}

void Exame::setStatus(char status) { 
    this->status = status; 
}

void Exame::toString() {
    std::cout << "Exame ID: " << id << std::endl;
    std::cout << "Encaminhamento ID: " << idEncaminhamento << std::endl;
    std::cout << "Data de Realização: " << dataRealizado.dia << "/" << dataRealizado.mes << "/" << dataRealizado.ano << std::endl;
    std::cout << "Animal ID: " << idAnimal << std::endl;
    std::cout << "Resultado: " << resultado << std::endl;
    std::cout << "Status: " << (status == 'F' ? "Feito" : "Não feito") << std::endl;
}
