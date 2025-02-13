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

