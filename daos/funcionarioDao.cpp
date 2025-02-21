#include "funcionarioDao.hpp"

FuncionarioDao::FuncionarioDao(){
    funcionarios = {
        Funcionario(3, "Everton", Data(15, 8, 2015), Data(0, 0, 0), 'A', IMAGINOLOGISTA),
        Funcionario(4, "Juliane", Data(20, 5, 2017), Data(0, 0, 0), 'A', IMAGINOLOGISTA),
        Funcionario(5, "Alane", Data(20, 8, 2017), Data(0, 0, 0), 'A', MEDICO)
    };
};

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