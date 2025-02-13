#include <vector>
#include "../entidades/exame.hpp"  
#include "../entidades/data.hpp"
#include "../entidades/encaminhamento.hpp"
#include "../entidades/animal.hpp"
#include "../entidades/funcionario.hpp"
#include "../entidades/veterinario.hpp"

#pragma once

class ExameDao {
private:
    std::vector<Exame> exames;
    Animal* animal2;
    Animal* animal5;
    Encaminhamento* encaminhamento432;
    Encaminhamento* encaminhamento440;
    Funcionario* funcionario1;
    Funcionario* funcionario2;
    Veterinario* veterinario1;
    Veterinario* veterinario2;

public:

    ExameDao();
    ~ExameDao();

    void create(Exame exame);
    void update(int id, Exame exameAtualizado);
    void remove(int id);
    Exame retrieve(int id);
    std::vector<Exame> list();
};
