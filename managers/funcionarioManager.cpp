#include <iostream>
#include <vector>
#include "funcionarioManager.hpp"
#include "../entidades/funcionario.hpp"
#include "../entidades/veterinario.hpp"
#include "../daos/daoManager.hpp"

FuncionarioManager::FuncionarioManager(DaoManager* daoM) : daoManager(daoM) {}

void FuncionarioManager::getFuncionario(int idFuncionario){
    Funcionario* funcionario = daoManager->getFuncionarioDao()->retrieve(idFuncionario);
    std::cout << "Dados do funcionario selecionado:" << std::endl;
    std::cout << funcionario->toString();
}


void FuncionarioManager::listFuncionarios() {
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    std::cout << "Funcionários cadastrados:" << std::endl;
    for (Funcionario& funcionario : funcionarios) {
        std::cout << funcionario.toString() << std::endl;
    }
}

void FuncionarioManager::listMedicosVeterinarios() {
    std::vector<Veterinario> medicos = daoManager->getVeterinarioDao()->list();
    std::cout << "Médicos Veterinários disponíveis:" << std::endl;
    for (Veterinario& medico : medicos) {
        if (medico.getStatus() == 'A') {
            std::cout << medico.toString() << std::endl;
        }
    }
}

void FuncionarioManager::listImaginologistas() {
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    std::cout << "Lista de Imaginologistas:" << std::endl;
    for (Funcionario& f : funcionarios) {
        if (f.getCargo() == IMAGINOLOGISTA) {
            std::cout << f.toString() << std::endl;
        }
    }
}


