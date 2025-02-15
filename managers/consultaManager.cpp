#include <iostream>
#include <vector>
#include "consultaManager.hpp"
#include "../entidades/consulta.hpp"
#include "../entidades/exame.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"
#include "encaminhamentoManager.hpp"

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
    for (size_t i = 0; i < consultasAnimal.size(); i++)
    {
        if (consultasAnimal[i].getAnimal()->getId() == idAnimal)
        {
            consultasAnimal[i].toString();
        }
        
    }
    
}

void ConsultaManager::setPedidoExame(int idConsulta, std::string documentoExame, std::string idRequisitor, int idRecebeRequisicao, Data dataRequisicao) {
    std::vector<Encaminhamento> encaminhamentos = daoManager->getEncaminhamentoDao()->list();
    
    Funcionario* funcionario = daoManager->getFuncionarioDao()->retrieve(idRecebeRequisicao);
    Veterinario* veterinario = daoManager->getVeterinarioDao()->retrieve(idRequisitor);
    
    if (funcionario && veterinario) {
        Encaminhamento encaminhamento = Encaminhamento(encaminhamentos.size(), dataRequisicao, documentoExame, funcionario, veterinario);

        daoManager->getEncaminhamentoDao()->create(encaminhamento);
        std::cout << "Pedido de exame realizado com sucesso!" << std::endl;
    } else {
        std::cerr << "Erro: Funcionário ou Veterinário não encontrado!" << std::endl;
    }
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

