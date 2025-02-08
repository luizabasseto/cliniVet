#include <iostream>
#include <vector>

#pragma once

class Encaminhamento{
    int id;
    std::string documentoRequisicao;
    Data dataRequisicao;
    //Funcionario* recebeRequisicao;
    //MedicoVeterinario* requisitor;
    

public:
Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string resultado);
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