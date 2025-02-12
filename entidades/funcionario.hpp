#include <iostream>
#include <vector>
#include "data.hpp"

#pragma once

class Funcionario{
private:
    int id;
    Data dataEntrada;
    Data dataSaida;
    char status;
    

public:
    Funcionario(int idFuncionario, Data dataEntrada, Data dataSaida, char status);
    virtual int getIdFuncionario();
    virtual void setIdFuncionario(int idFuncionariod);

    virtual Data getDataEntradaFuncionario();
    virtual void setDataEntradaFuncionario(Data dataEntrada);

    virtual Data getDataSaidaFuncionario();
    virtual void setDataSaidaFuncionario(Data dataSaida);

    virtual char getStatus();
    virtual void setStatus(char status);

    virtual void toString();
    virtual Funcionario* getFuncionario();
    virtual void setFuncionario(Funcionario* Funcionario);
};