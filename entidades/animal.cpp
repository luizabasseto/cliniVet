#include "animal.hpp"

Animal::Animal(int id, std::string nome, Data dataNascimento, char sexo) {
    this->id = id;
    this->nome = nome;
    this->dataNascimento = dataNascimento;
    this->sexo = sexo;
}

int Animal::getId(){
    return id;
}

void Animal::setId(int id) {
    this->id = id;
}

std::string Animal::getNome(){
    return nome;
}

void Animal::setNome(std::string nome) {
    this->nome = nome;
}

Data Animal::getDataNascimento() {
    return dataNascimento;
}

void Animal::setDataNascimento(Data dataNascimento) {
    this->dataNascimento = dataNascimento;
}

char Animal::getSexo(){
    return sexo;
}

void Animal::setSexo(char sexo) {
    this->sexo = sexo;
}

void Animal::toString(){
    std::cout << "ID: " << id << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Data de Nascimento: " << dataNascimento.dia << "/" << dataNascimento.mes << "/" << dataNascimento.ano << std::endl;
    std::cout << "Sexo: " << (sexo == 'M' ? "Masculino" : "Feminino") << std::endl;
}
