#include "animal.hpp"
#include "data.hpp"

Animal::Animal(int id, std::string nome, Data dataNascimento, char sexo) {
    this->id = id;
    this->nome = nome;
    this->dataNascimento = dataNascimento;
    this->sexo = sexo;
}

Animal::Animal() {
    this->id = 00000; // Gera um ID único
    this->nome = "ERROR";
    this->sexo = 'M';  // Definindo um valor padrão para sexo
    this->dataNascimento = {01,01,2001};
}

int Animal::getId(){
    return id;
}

void Animal::setId(int id) { //adicionar algo pra gerar o id diferente que havíamos conversado?
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

std::string Animal::toString() {
    std::string str;
    str += "ID: " + std::to_string(id) + "\n";
    str += "Nome: " + nome + "\n";
    str += "Data de Nascimento: " + dataNascimento.toString() + "\n"; 
    str += "Sexo: " + std::string(1, sexo == 'M' ? 'M' : 'F') + "\n";
    
    return str;
}
