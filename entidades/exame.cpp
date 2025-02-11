#include <iostream>
#include <string>
#include "exame.hpp"

Exame::Exame(int idExame, Data dataRealizado, Animal* animal, Encaminhamento* encaminhamento, std::string resultado, char status) {
    this->id = idExame; 
    this->dataRealizado = dataRealizado;
    this->animal = animal;
    this->encaminhamento = encaminhamento;
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

Animal* Exame::getAnimalDoExame() {
    return animal;
}

void Exame::setAnimalDoExame(Animal* animal) {
    this->animal = animal;
}

Encaminhamento* Exame::getEncaminhamento() {
    return encaminhamento;
}

void Exame::setEncaminhamento(Encaminhamento* encaminhamento) {
    this->encaminhamento = encaminhamento;
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
    std::cout << "Exame ID: " << id << "\n";
    std::cout << "Encaminhamento ID: " << encaminhamento << "\n";
    std::cout << "Data de Realização: " << dataRealizado.dia << "/" << dataRealizado.mes << "/" << dataRealizado.ano << "\n";
    std::cout << "Animal ID: " << (animal ? std::to_string(animal->getId()) : "N/A") << "\n";
    std::cout << "Resultado: " << resultado << "\n";
    std::cout << "Status: " << (status == 'F' ? "Feito" : "Não feito") << "\n";
}

Exame* Exame::getExame() { 
    return this; 
}

void Exame::setExame(Exame* exame) {
    this->id = exame->id;
    this->dataRealizado = exame->dataRealizado;
    this->animal = exame->animal;
    this->encaminhamento = exame->encaminhamento;
    this->resultado = exame->resultado;
    this->status = exame->status;
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
