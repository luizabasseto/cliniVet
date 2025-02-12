#include <iostream>
#include <vector>
#include "consultaManager.hpp"
#include "../entidades/consulta.hpp"
#include "../entidades/exame.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"

ConsultaManager::ConsultaManager(DaoManager* daoM) : daoManager(daoM) {}

void ConsultaManager::getConsulta(int idConsulta){
    Consulta consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    std::cout<<"Dados da consulta selecionada:";
    consulta.toString();  
}

void ConsultaManager::listConsultas(int idAnimal){
    std::vector<Consulta> consultasAnimal = daoManager->getConsultaDao()->list();
    Animal animal = daoManager->getAnimalDao()->retrieve(idAnimal);
    std::cout << "Dados do animal" << std::endl;
    animal.toString();
    std::cout << "Consultas do animal" << std::endl;
    for (int i = 0; i < consultasAnimal.size(); i++)
    {
        if (consultasAnimal[i].getIdAnimal() == idAnimal)
        {
            consultasAnimal[i].toString();
        }
        
    }
    
}

void ConsultaManager::setPedidoExame(int idConsulta, std::string documentoExame, int idRequisitor, int idRecebeRequisicao, Data dataRequisicao){
    std::vector<Encaminhamento> encaminhamentos = daoManager -> getEncaminhamentoDao()->list();
    Encaminhamento encaminhamento = {encaminhamentos.size(), dataRequisicao, documentoExame, idRequisitor, idRecebeRequisicao};
    daoManager -> getEncaminhamentoDao()->create(encaminhamento);
    std::cout << "Pedido de exame realizado com sucesso!" << std::endl;
}

//arrumar

void ConsultaManager::cancelarConsulta(int idConsulta) {
    // if (status != 'C') {
    //     status = 'C'; // C = Cancelada
    //     std::cout << "Consulta ID " << id << " foi cancelada." << std::endl;
    // } else {
    //     std::cout << "A consulta já está cancelada." << std::endl;
    // }
}

void ConsultaManager::remarcarConsulta(Data novaData) {
    // if (status != 'C' && status != 'F') {
    //     horarioConsulta = novaData;
    //     std::cout << "Consulta ID " << id << " foi remarcada para " << novaData.dia << "/" << novaData.mes << "/" << novaData.ano << "." << std::endl;
    // } else {
    //     std::cout << "Consulta não pode ser remarcada pois está cancelada ou finalizada." << std::endl;
    // }
}

void ConsultaManager::encerrarConsulta(int idConsulta) {
    Consulta consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    consulta.setStatus('F');
    daoManager->getConsultaDao()->update(idConsulta, consulta);
}

