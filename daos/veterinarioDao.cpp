#include "veterinarioDao.hpp"

VeterinarioDao::VeterinarioDao(){
    veterinarios = {
        Veterinario(5, "Alane", Data(20, 8, 2017), Data(0, 0, 0), 'A', MEDICO, "1234"),
        Veterinario(3, "Victoria", Data(10, 2, 2015), Data(0, 0, 0), 'A', MEDICO, "8888")
    };
};


void VeterinarioDao::create(Veterinario veterinario){
    veterinarios.push_back(veterinario);
}

void VeterinarioDao::update(std::string crmv, Veterinario veterinario){
    for (size_t i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getCrmv() == crmv){
            veterinarios[i] = veterinario;
        }
    }
    
}

void VeterinarioDao::remove(std::string crmv){
    for (size_t i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getCrmv() == crmv){
            veterinarios.erase(veterinarios.begin()+i);
        }
    }
}

Veterinario* VeterinarioDao::retrieve(std::string crmv){
    for (size_t i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getCrmv() == crmv){
            return &veterinarios[i];
        }
    }
    return nullptr;
}

std::vector<Veterinario> VeterinarioDao::list(){
    return veterinarios;
}