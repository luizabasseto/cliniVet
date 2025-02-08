#include <iostream>
#include <string>
#include "Consulta.hpp"

using namespace std;

Consulta::Consulta(int id, Data data, std::string anamnese, float peso, char status, Animal* animal) {
    this->id = id;
    this->horarioConsulta = data;
    this->anamnese = anamnese;
    this->peso = peso;
    this->status = status;
    this->animal = animal;
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

void Consulta::toString() {
    cout << "ID: " << id << endl;
    cout << "Data da consulta: " << horarioConsulta.dia << "/" << horarioConsulta.mes << "/" << horarioConsulta.ano << endl;
    cout << "Anamnese: " << anamnese << endl;
    cout << "Peso: " << peso << "kg" << endl;
    cout << "Status: " << status << endl;
}

void Consulta::cancelarConsulta() {
    if (status != 'C') {
        status = 'C'; // C = Cancelada
        std::cout << "Consulta ID " << id << " foi cancelada." << std::endl;
    } else {
        std::cout << "A consulta já está cancelada." << std::endl;
    }
}

void Consulta::remarcarConsulta(Data novaData) {
    if (status != 'C' && status != 'F') {
        horarioConsulta = novaData;
        std::cout << "Consulta ID " << id << " foi remarcada para " << novaData.dia << "/" << novaData.mes << "/" << novaData.ano << "." << std::endl;
    } else {
        std::cout << "Consulta não pode ser remarcada pois está cancelada ou finalizada." << std::endl;
    }
}

void Consulta::finalizarConsulta() {
    if (status != 'F') {
        status = 'F'; // F = Finalizada
        std::cout << "Consulta ID " << id << " foi finalizada." << std::endl;
    } else {
        std::cout << "A consulta já está finalizada." << std::endl;
    }
}
