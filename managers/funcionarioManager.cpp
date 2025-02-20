#include <iostream>
#include <vector>
#include "funcionarioManager.hpp"
#include "../entidades/funcionario.hpp"
#include "../entidades/veterinario.hpp"
#include "../daos/daoManager.hpp"

FuncionarioManager::FuncionarioManager(DaoManager *daoM) : daoManager(daoM) {}

Funcionario* FuncionarioManager::getFuncionario(int idFuncionario){
    Funcionario *funcionario = daoManager->getFuncionarioDao()->retrieve(idFuncionario);
    return funcionario;
}

//ta faltando o SET

std::vector<Funcionario> FuncionarioManager::listFuncionariosAtivos(){
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    std::vector<Funcionario> ativos;
    for (Funcionario &f : funcionarios){
        if (f.getStatus() == 'A'){
            ativos.push_back(f);
        }
    }
    return ativos;
}

std::vector<Funcionario> FuncionarioManager::listMedicosVeterinarios(){
    std::vector<Veterinario> medicos = daoManager->getVeterinarioDao()->list();
    std::vector<Funcionario> veterinarios;
    std::cout << "Médicos Veterinários disponíveis:" << std::endl;
    for (Veterinario &medico : medicos){
        if (medico.getStatus() == 'A'){
            veterinarios.push_back(medico);
        }
    }
    return veterinarios;
}

std::vector<Funcionario> FuncionarioManager::listImaginologistas(){
    std::vector<Funcionario> funcionarios = daoManager->getFuncionarioDao()->list();
    std::vector<Funcionario> imaginologistas;
    for (Funcionario &f : funcionarios){
        if (f.getCargo() == IMAGINOLOGISTA && f.getStatus() == 'A'){
            imaginologistas.push_back(f);
        }
    }
    return imaginologistas;
}
