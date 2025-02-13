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

ExameDao::ExameDao() {
    animal2 = new Animal(5, "Betinho", Data(10, 8, 2024), 'M');
    animal5 = new Animal(6, "Marcelo", Data(12, 1, 2024), 'M');

    funcionario1 = new Funcionario(1, Data(10, 8, 2024), Data(0, 0, 0), 'A');
    funcionario2 = new Funcionario(2, Data(12, 1, 2024), Data(0, 0, 0), 'A');

    veterinario1 = new Veterinario(1,  Data(5, 6, 2024), Data(0, 0, 0), 'A', "CRMV-1234");
    veterinario2 = new Veterinario(2,  Data(7, 9, 2024), Data(0, 0, 0), 'A', "CRMV-5678");

    encaminhamento432 = new Encaminhamento(1, Data(5, 6, 2024), "Encaminhamento para exame de sangue.", funcionario1, veterinario1);
    encaminhamento440 = new Encaminhamento(2, Data(7, 9, 2024), "Encaminhamento para radiografia.", funcionario2, veterinario2);

    exames = {
        Exame(1, Data(15, 8, 2024), animal2, encaminhamento432, "Hemograma completo", 'F'),
        Exame(2, Data(20, 1, 2025), animal5, encaminhamento440, "Radiografia de tórax", 'F')
    };
}
