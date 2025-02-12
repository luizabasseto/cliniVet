#include <vector>
#include "../entidades/funcionario.hpp"
#include "../entidades/data.hpp"

#pragma once

class FuncionarioDao{

    std::vector<Funcionario> funcionarios = {
        Funcionario(3, Data(15, 8, 2015), Data(0, 0, 0), 'A'),
        Funcionario(4, Data(20, 5, 2017), Data(0, 0, 0), 'A')
    };
    public:
        void create(Funcionario funcionario);
        void update(int idFuncionario, Funcionario funcionario);
        void remove(int idFuncionario);
        Funcionario retrieve(int idFuncionario);
        std::vector<Funcionario> list();
};
