#include <iostream>
#include <vector>
#include "../entidades/consulta.hpp"
#include "../daos/daoManager.hpp"
#include "../entidades/data.hpp"

#pragma once

class FuncionarioManager{
    DaoManager *daoManager;

public:
    FuncionarioManager(DaoManager *daoManager);

    void setFuncionario(Funcionario* funcionario);

    Funcionario* getFuncionario(int idFuncionario);

    std::vector<Funcionario> listFuncionariosAtivos();

    std::vector<Funcionario> listMedicosVeterinarios();

    std::vector<Funcionario> listImaginologistas();

};