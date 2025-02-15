#include <iostream>
#include <string>
#include "consulta.hpp"

using namespace std;

Consulta::Consulta(int id, Data data, std::string anamnese, float peso, char status, Animal* animal, Veterinario* veterinario){
    this->id = id;
    this->horarioConsulta = data;
    this->anamnese = anamnese;
    this->peso = peso;
    this->status = status;
    this->animal = animal;
    this->veterinario = veterinario;
}

Consulta::Consulta(){
    this->id = 0;
    this->horarioConsulta = {01,01,2001};
    this->anamnese = "anamnese";
    this->peso = 0000;
    this->status = 'n';
    this->animal = animal;
    this->veterinario = veterinario;
}

// Métodos Getters e Setters
int Consulta::getIdConsulta() {
    return id;
}

void Consulta::setIdConsulta(int idConsulta) {
    this->id = idConsulta;
}

Data Consulta::getHorarioConsulta() {
    return horarioConsulta;
}

void Consulta::setHorarioConsulta(Data data) {
    this->horarioConsulta = data;
}

std::string Consulta::getAnamnese() {
    return anamnese;
}

void Consulta::setAnamnese(std::string anamnese) {
    this->anamnese = anamnese;
}

float Consulta::getPeso() {
    return peso;
}

void Consulta::setPeso(float newPeso) {
    this->peso = newPeso;
}

char Consulta::getStatus() {
    return status;
}

void Consulta::setStatus(char newStatus) {
    this->status = newStatus;
}

Animal* Consulta::getAnimal(){
    return animal;
}

void Consulta::setAnimal(Animal* animal){
    this->animal = animal;
}

Veterinario* Consulta::getVeterinario(){
    return veterinario;
}

void Consulta::setVeterinario(Veterinario* veterinario){
    this->veterinario = veterinario;
}

void Consulta::toString() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Data da consulta: " << horarioConsulta.toString() << std::endl;
    std::cout << "Anamnese: " << anamnese << std::endl;
    std::cout << "Peso: " << peso << "kg" << std::endl;
    std::cout << "Status: " << (status == 'F' ? "Finalizada" : "Pendente") << std::endl;
    if (animal) std::cout << "Animal: " << animal->getNome() << std::endl;
    if (veterinario) std::cout << "Médico veterinário: " << veterinario->getCrmv() << std::endl;
}