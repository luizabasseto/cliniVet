#include <vector>
#include "../entidades/veterinario.hpp"  

#pragma once

class VeterinarioDao {
private:
    std::vector<Veterinario> veterinarios;

public:
    void create(Veterinario veterinario);
    void update(std::string crmv, Veterinario veterinarioAtualizado);
    void remove(std::string crmv);
    Veterinario* retrieve(std::string crmv);
    std::vector<Veterinario> list();
};
