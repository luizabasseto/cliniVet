#include <iostream>
#include <vector>

#pragma once

class Encaminhamento{
    int id;
    std::string documentoRequisicao;
    Data dataRequisicao;
    int recebeRequisicao; // id do funcionario
    int requisitor; //id do funcionario
    

public:
    Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string resultado, int recebeRequisicao, int requisitor);
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