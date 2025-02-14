#include <iostream>
#include <vector>
#include "data.hpp"

#pragma once

enum Cargo
{
    IMAGINOLOGISTA,
    SECRETARIA,
    ATENDENTE,
    ADMINISTRATIVO,
};

std::string toStringCargo(Cargo cargo);

class Funcionario{
private:
    int id;
    Data dataEntrada;
    Data dataSaida;
    char status;
    Cargo cargo;
    

public:
    Funcionario(int idFuncionario, Data dataEntrada, Data dataSaida, char status, Cargo cargo);
    virtual int getIdFuncionario();
    virtual void setIdFuncionario(int idFuncionariod);

    virtual Data getDataEntradaFuncionario();
    virtual void setDataEntradaFuncionario(Data dataEntrada);

    virtual Data getDataSaidaFuncionario();
    virtual void setDataSaidaFuncionario(Data dataSaida);

    virtual char getStatus();
    virtual void setStatus(char status);

    virtual Cargo getCargo();
    virtual void setCargo(Cargo cargo);

    virtual void toString();
    virtual Funcionario* getFuncionario();
    virtual void setFuncionario(Funcionario* Funcionario);

    
};