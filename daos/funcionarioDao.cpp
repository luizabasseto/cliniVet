#include "funcionarioDao.hpp"

void FuncionarioDao::create(Funcionario funcionario){
    funcionarios.push_back(funcionario);
}

void FuncionarioDao::update(int idFuncionario, Funcionario funcionario){
    for (size_t i = 0; i < funcionarios.size(); i++)
    {
        if (funcionarios[i].getIdFuncionario()==idFuncionario)
        {
            funcionarios[i] = funcionario;
        }
        
    }
    
}

void FuncionarioDao::remove(int idFuncionario){
    for (size_t i = 0; i < funcionarios.size(); i++)
    {
        if (funcionarios[i].getIdFuncionario()==idFuncionario)
        {
            funcionarios.erase(funcionarios.begin()+i);
        }
        
    }
}

Funcionario* FuncionarioDao::retrieve(int idFuncionario) {
    for (size_t i = 0; i < funcionarios.size(); i++) {
        if (funcionarios[i].getIdFuncionario() == idFuncionario) {
            return &funcionarios[i]; 
        }
    }
    return nullptr;  
}

std::vector<Funcionario> FuncionarioDao::list(){
    return funcionarios;
}