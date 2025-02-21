#include <vector>
#include "../entidades/funcionario.hpp"
#include "../entidades/data.hpp"

#pragma once

class FuncionarioDao
{

    std::vector<Funcionario> funcionarios;

public:
    FuncionarioDao();
    ~FuncionarioDao();
    void create(Funcionario funcionario);
    void update(int idFuncionario, Funcionario funcionario);
    void remove(int idFuncionario);
    Funcionario *retrieve(int idFuncionario);
    std::vector<Funcionario> list();
};
