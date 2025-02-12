#include <iostream>
#include <vector>
#include "encaminhamento.hpp" 
#include "animal.hpp"

// Implementação do construtor
Encaminhamento::Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string documentoRequisicao, int recebeRequisicao, int requisitor) {
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

// Implementação do método toString
void Encaminhamento::toString() {
    std::cout << "ID Encaminhamento: " << id << std::endl
              << "Documento Requisicao: " << documentoRequisicao << std::endl
              << "Data Requisicao: " << dataRequisicao.toString() << std::endl
              << "Recebe Requisicao (Funcionario ID): " << recebeRequisicao << std::endl
              << "Requisitor (Funcionario ID): " << requisitor << std::endl;
}