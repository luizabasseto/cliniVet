#pragma once
#include <vector>
#include "../daos/daoManager.hpp"
#include "../entidades/encaminhamento.hpp"

class EncaminhamentoManager {
    DaoManager* daoManager;

public:
    EncaminhamentoManager(DaoManager* daoManager);

    void createEncaminhamento(Data dataRequisicao, std::string documentoRequisicao, Funcionario* recebeRequisicao, Veterinario* requisitor);
    void listEncaminhamentos();
    Encaminhamento* getEncaminhamento(int idEncaminhamento);
};
