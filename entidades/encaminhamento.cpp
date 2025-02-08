#include <iostream>
#include <string>
//#include "funcionario.hpp" 
//#include "medicoVeterinario.hpp" 

struct Data {
    int dia;
    int mes;
    int ano;
};

class Encaminhamento {
private:
    int id;
    std::string documentoRequisicao;
    Data dataRequisicao;
    //Funcionario* recebeRequisicao; 
    //MedicoVeterinario* requisitor; 

public:
    //Funcionario* recebeRequisicao, MedicoVeterinario* requisitor)
    Encaminhamento(int idEncaminhamento, Data dataRequisicao, std::string documentoRequisicao);

    int getIdEncaminhamento();
    void setIdEncaminhamento(int idEncaminhamento);

    Data getDataRequisicao();
    void setDataRequisicao(Data dataRequisicao);

    std::string getDocumentoRequisicao();
    void setDocumentoRequisicao(std::string documentoRequisicao);

    // Funcionario* getRecebeRequisicao();
    // void setRecebeRequisicao(Funcionario* funcionario);

    // MedicoVeterinario* getRequisitor();
    // void setRequisitor(MedicoVeterinario* medicoVeterinario);

    void toString();
    Encaminhamento* getEncaminhamento();
    void setEncaminhamento(Encaminhamento* encaminhamento);
    // Funcionario* funcionario, MedicoVeterinario* medicoVeterinario,
    void registrarRequisicao(std::string documento);

};
