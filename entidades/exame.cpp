#include <iostream>
#include <string>
#include "exame.hpp"
#include "encaminhamento.hpp"
#include "animal.hpp"

Exame::Exame(int idExame, Data dataRealizado, Animal* animal, Encaminhamento* encaminhamento, std::string resultado, char status) {
    this->id = idExame; 
    this->dataRealizado = dataRealizado;
    this->animal = animal;
    this->encaminhamento = encaminhamento;
    this->resultado = resultado;
    this->status = status;
}

Exame::Exame(){
    this->id = 000; 
    this->dataRealizado = {01,01,2001};
    this->animal = animal;
    this->encaminhamento = encaminhamento;
    this->resultado = "resultado";
    this->status = 'N';
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
    std::cout << "Exame ID: " << id << std::endl;
    if (encaminhamento) { 
        std::cout << "Encaminhamento: " << encaminhamento->toString() << std::endl;
    } else {
        std::cout << "Encaminhamento: Nenhum encaminhamento associado." << std::endl;
    }
    std::cout << "Data de Realização: " << dataRealizado.toString() << std::endl;
    if (animal) {
        std::cout << "Animal: "<<animal->toString() << std::endl;
    } else {
        std::cout << "Animal: Nenhum animal associado." << std::endl;
    }
    std::cout << "Resultado: " << resultado << std::endl;
    std::cout << "Status: " << (status == 'F' ? "Feito" : "Não feito") << std::endl;
}
