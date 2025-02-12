#include <iostream>
#include <vector>

#pragma once

class Funcionario{
    int id;
    Data dataEntrada;
    Data dataSaida;
    char status;
    

public:
    Funcionario(int idFuncionario, Data dataEntrada, Data dataSaida, char status);
    int getIdFuncionario();
    void setIdFuncionario(int idFuncionariod);

    Data getDataEntradaFuncionario();
    void setDataEntradaFuncionario(Data dataEntrada);

    Data getDataSaidaFuncionario();
    void setDataSaidaFuncionario(Data dataSaida);

    char getStatus();
    void setStatus(char status);

    void toString();
    Funcionario* getFuncionario();
    void setFuncionario(Funcionario* Funcionario);

    //???????????????????????????????????????????????????????????????????????
    void criarFuncionario(); //adiciona tudo, exceto resultado, com status de não feito
    void registrarResultado(); //adiciona resultado, data de realização e muda status para feito

};