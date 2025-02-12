#include <iostream>
#include <vector>
#include "data.hpp"

#pragma once

class Encaminhamento{
    int id;
    std::string documentoRequisicao;
    Data dataRequisicao;
    Funcionario* recebeRequisicao; 
    Veterinario* requisitor; 
    

public:
    Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string resultado, Funcionario* recebeRequisicao, Veterinario* requisitor);
    int getIdEncaminhamento();
    void setIdEncaminhamento(int idEncaminhamento);

    Data getDataRequisicao();
    void setDataRequisicao(Data dataRequisicao);

    std::string getDocumentoRequisicao();
    void setDocumentoRequisicao(std::string resultado);


    void toString();
    Encaminhamento* getEncaminhamento();
    void setExame(Encaminhamento* encaminhamento);

};