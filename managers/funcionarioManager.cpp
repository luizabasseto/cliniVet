#include <iostream>
#include <vector>
#include "funcionarioManager.hpp"
#include "../entidades/funcionario.hpp"
#include "../entidades/veterinario.hpp"
#include "../daos/daoManager.hpp"

FuncionarioManager::FuncionarioManager(DaoManager* daoM) : daoManager(daoM) {}

void FuncionarioManager::getFuncionario(int idFuncionario){
    Funcionario funcionario = daoManager->getFuncionarioDao()->retrieve(idFuncionario);
    std::cout<<"Dados da funcionario selecionada:";
    funcionario.toString();  
}

void FuncionarioManager::listFuncionarios(int idFuncionario){
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    Funcionario funcionario = daoManager->getFuncionarioDao()->retrieve(idFuncionario);
    std::cout<<"Funcionarios";
    funcionario.toString();
    
}

void FuncionarioManager::listMedicosVeterinarios(int crmv) {
    std::vector<Veterinario> medicos = daoManager->getVeterinarioDao()->list();
    Veterinario veterinario = daoManager->getVeterinarioDao()->retrieve(crmv);

    std::cout << "Médicos Veterinários disponíveis" << std::endl;
    for (int i = 0; i < medicos.size(); i++)
    {
        if (medicos[i].getStatus() == 'A')
        {
            medicos[i].toString();
        }
        
    }
}

void FuncionarioManager::listImaginologistas(int idFuncionario) {
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    Funcionario funcionario = daoManager->getFuncionarioDao()->retrieve(idFuncionario);
    std::cout<<"Imaginologistas";
    funcionario.toString();
}

