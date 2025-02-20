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
    MEDICO
};

std::string toStringCargo(Cargo cargo);

class Funcionario{
private:
    int id;
    std::string nome; //originalmente, esse atributo vem de "Pessoa";
    Data dataEntrada;
    Data dataSaida;
    char status;
    Cargo cargo;
    

public:
    Funcionario(int idFuncionario, std::string nome, Data dataEntrada, Data dataSaida, char status, Cargo cargo);
    virtual int getIdFuncionario();
    virtual void setIdFuncionario(int idFuncionariod);

    virtual std::string getNome();
    virtual void setNome(std::string nome);

    virtual Data getDataEntradaFuncionario();
    virtual void setDataEntradaFuncionario(Data dataEntrada);

    virtual Data getDataSaidaFuncionario();
    virtual void setDataSaidaFuncionario(Data dataSaida);

    virtual char getStatus();
    virtual void setStatus(char status);

    virtual Cargo getCargo();
    virtual void setCargo(Cargo cargo);

    virtual std::string toString();
    virtual Funcionario* getFuncionario();
    virtual void setFuncionario(Funcionario* Funcionario);
    
};