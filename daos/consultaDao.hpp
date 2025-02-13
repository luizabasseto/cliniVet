#include <vector>
#include "../entidades/consulta.hpp"
#include "../entidades/data.hpp"
#include "../entidades/animal.hpp"
#include "../entidades/veterinario.hpp"

#pragma once

class ConsultaDao{
private:
    std::vector<Consulta> consultas;
    Animal animal1;
    Animal animal2;

    Veterinario veterinario3;
    Veterinario veterinario4;

public:
    ConsultaDao();

    void create(Consulta consulta);
    void update(int idConsulta, Consulta consulta);
    void remove(int idConsulta);
    Consulta retrieve(int idConsulta);
    std::vector<Consulta> list();
};

ConsultaDao::ConsultaDao()
    : animal1(1, "Antonia", Data(10, 8, 2024), 'F'),
      animal2(2, "Marcelo", Data(12, 1, 2024), 'M'),
      veterinario3(1, Data(5, 6, 2024), Data(0, 0, 0), 'A', "CRMV-1234"),
      veterinario4(2, Data(7, 9, 2024), Data(0, 0, 0), 'A', "CRMV-5678")
{
    consultas = {
        Consulta(1, Data(15, 8, 2024), "Antonia está com diabetes canina.", 10, 'F', &animal1, &veterinario3),
        Consulta(2, Data(20, 1, 2025), "Marcelo está doentezinho.", 8, 'F', &animal2, &veterinario4)};
}

