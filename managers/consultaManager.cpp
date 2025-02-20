#include <iostream>
#include <vector>
#include "consultaManager.hpp"
#include "../entidades/consulta.hpp"
#include "../entidades/exame.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"
#include "encaminhamentoManager.hpp"

ConsultaManager::ConsultaManager(DaoManager *daoM, ExameManager* exameManager) : daoManager(daoM), exameManager(exameManager) {}

Consulta ConsultaManager::getConsulta(int idConsulta)
{
    Consulta* consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    return *consulta;
}

std::vector<Consulta> ConsultaManager::listConsultas(int idAnimal)
{
    std::vector<Consulta> consultas = daoManager->getConsultaDao()->list();
    Animal* animal = daoManager->getAnimalDao()->retrieve(idAnimal);
    std::cout << "Dados do animal" << std::endl;
    animal->toString();
    std::vector<Consulta> consultasAnimal;
    std::cout << "Consultas do animal" << std::endl;
    for (size_t i = 0; i < consultas.size(); i++)
    {
        if (consultas[i].getAnimal()->getId() == idAnimal)
        {
            consultasAnimal.push_back(consultas[i]);
        }
    }
    return consultasAnimal;
}

void ConsultaManager::setPedidoExame(int idConsulta, std::string documentoExame, Veterinario *requisitor, Funcionario *recebeRequisicao, Data dataRequisicao, int quantExames)
{
    std::vector<Encaminhamento> encaminhamentos = daoManager->getEncaminhamentoDao()->list();
    Encaminhamento encaminhamento = Encaminhamento(encaminhamentos.size(), dataRequisicao, documentoExame, recebeRequisicao, requisitor);
    daoManager->getEncaminhamentoDao()->create(encaminhamento);
    std::vector<Exame> exames = daoManager->getExameDao()->list();
    Consulta* consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    Animal* animal = consulta->getAnimal();
    for (int i = 0; i < quantExames; i++)
    {
        
        exameManager->criarExameDePedido(encaminhamento.getIdEncaminhamento(), animal);
    }
    

    std::cout << "Pedido de exame realizado com sucesso!" << std::endl;
}

void ConsultaManager::encerrarConsulta(int idConsulta)
{
    Consulta* consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    consulta->setStatus('F');
    daoManager->getConsultaDao()->update(idConsulta, *consulta);
}

void ConsultaManager::setConsulta(int idConsulta, std::string anamnese, float peso){
    Consulta* consulta = daoManager->getConsultaDao()->retrieve(idConsulta);
    consulta->setAnamnese(anamnese);
    consulta->setPeso(peso);
    daoManager->getConsultaDao()->update(idConsulta, *consulta);
}