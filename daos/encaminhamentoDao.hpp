#include <vector>
#include "../entidades/encaminhamento.hpp"
#include "../entidades/data.hpp"
#include "../entidades/veterinario.hpp"
#include "../entidades/funcionario.hpp"

#pragma once

class EncaminhamentoDao{
private:
    std::vector<Encaminhamento> encaminhamentos;
    Funcionario funcionario1;
    Funcionario funcionario2;
    Veterinario veterinario1;
    Veterinario veterinario2;

public:
    EncaminhamentoDao(); 

    void create(Encaminhamento encaminhamento);
    void update(int idEncaminhamento, Encaminhamento encaminhamentoAtualizado);
    void remove(int idEncaminhamento);
    Encaminhamento* retrieve(int idEncaminhamento);
    std::vector<Encaminhamento> list();
};