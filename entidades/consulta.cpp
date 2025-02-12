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

// Métodos Getters e Setters
int Consulta::getIdConsulta() {
    return id;
}

void Consulta::setIdConsulta(int idConsulta) {
    id = idConsulta;
}

Data Consulta::getHorarioConsulta() {
    return horarioConsulta;
}

void Consulta::setHorarioConsulta(Data data) {
    horarioConsulta = data;
}

std::string Consulta::getAnamnese() {
    return anamnese;
}

void Consulta::setAnamnese(std::string anamnese) {
    anamnese = anamnese;
}

float Consulta::getPeso() {
    return peso;
}

void Consulta::setPeso(float newPeso) {
    peso = newPeso;
}

char Consulta::getStatus() {
    return status;
}

void Consulta::setStatus(char newStatus) {
    status = newStatus;
}

Animal* Consulta::getAnimal(){
    return animal;
}

void Consulta::setAnimal(Animal* animal){
    animal = animal;
}

Veterinario* Consulta::getVeterinario(){
    return veterinario;
}

void Consulta::setVeterinario(Veterinario* veterinario){
    veterinario = veterinario;
}

void Consulta::toString() {
    cout << "ID: " << id << endl;
    cout << "Data da consulta: " << horarioConsulta.toString() << endl;
    cout << "Anamnese: " << anamnese << endl;
    cout << "Peso: " << peso << "kg" << endl;
    cout << "Status: " << status << endl;
    cout << "Animal: " << animal->toString() << endl;
    cout << "Médico veterinário: " << veterinario->toString() << endl;
}