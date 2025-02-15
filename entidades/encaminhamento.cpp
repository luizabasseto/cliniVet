#include <iostream>
#include <vector>
#include "encaminhamento.hpp" 
#include "animal.hpp"

// Implementação do construtor
Encaminhamento::Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string documentoRequisicao, Funcionario* recebeRequisicao, Veterinario* requisitor) {
    this->id = idEncaminhamento;
    this->dataRequisicao = dataRequisicao;
    this->documentoRequisicao = documentoRequisicao;
    this->recebeRequisicao = recebeRequisicao;
    this->requisitor = requisitor;
}

// Implementação dos getters e setters
int Encaminhamento::getIdEncaminhamento() {
    return id;
}

void Encaminhamento::setIdEncaminhamento(int idEncaminhamento) {
    this->id = idEncaminhamento;
}

Data Encaminhamento::getDataRequisicao() {
    return dataRequisicao;
}

void Encaminhamento::setDataRequisicao(Data dataRequisicao) {
    this->dataRequisicao = dataRequisicao;
}

std::string Encaminhamento::getDocumentoRequisicao() {
    return documentoRequisicao;
}

void Encaminhamento::setDocumentoRequisicao(std::string documentoRequisicao) {
    this->documentoRequisicao = documentoRequisicao;
}

std::string Encaminhamento::toString() {
    std::string str;
    str += "ID Encaminhamento: " + std::to_string(id) + "\n";
    str += "Documento Requisicao: " + documentoRequisicao + "\n";
    str += "Data Requisicao: " + dataRequisicao.toString() + "\n"; 
    if (recebeRequisicao) {
        str += "Funcionario receptor: " + std::to_string(recebeRequisicao->getIdFuncionario()) + "\n";
    }    
    if (requisitor) {
        str += "Médico requisitor: " + requisitor->getCrmv() + "\n";
    }
    return str;
}
