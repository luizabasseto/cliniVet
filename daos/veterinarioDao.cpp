#include "veterinarioDao.hpp"

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