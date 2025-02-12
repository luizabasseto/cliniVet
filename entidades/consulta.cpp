#include <iostream>
#include <string>
#include "consulta.hpp"

using namespace std;

Consulta::Consulta(int id, Data data, std::string anamnese, float peso, char status, int idAnimal, int idVeterinario){
    this->id = id;
    this->horarioConsulta = data;
    this->anamnese = anamnese;
    this->peso = peso;
    this->status = status;
    this->idAnimal = idAnimal;
    this->idVeterinario = idVeterinario;
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

int Consulta::getIdAnimal(){
    return idAnimal;
}

void Consulta::setIdAnimal(int idAnimal){
    idAnimal = idAnimal;
}

int Consulta::getIdVeterinario(){
    return idVeterinario;
}

void Consulta::setIdVeterinario(int idVeterinario){
    idVeterinario = idVeterinario;
}

void Consulta::toString() {
    cout << "ID: " << id << endl;
    cout << "Data da consulta: " << horarioConsulta.dia << "/" << horarioConsulta.mes << "/" << horarioConsulta.ano << endl;
    cout << "Anamnese: " << anamnese << endl;
    cout << "Peso: " << peso << "kg" << endl;
    cout << "Status: " << status << endl;
    cout << "ID do Animal: " << idAnimal << endl;
    cout << "ID do Médico veterinário: " << idVeterinario << endl;
}