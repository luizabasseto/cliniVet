#include "veterinarioDao.hpp"

void VeterinarioDao::create(Veterinario veterinario){
    veterinarios.push_back(veterinario);
}

void VeterinarioDao::update(int idVeterinario, Veterinario veterinario){
    for (int i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getIdVeterinario()==idVeterinario){
            veterinarios[i] = veterinario;
        }
    }
    
}

void VeterinarioDao::remove(int idVeterinario){
    for (int i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getIdVeterinario()==idVeterinario){
            veterinarios.erase(veterinarios.begin()+i);
        }
    }
}

Veterinario VeterinarioDao::retrieve(int idVeterinario){
    for (int i = 0; i < veterinarios.size(); i++){
        if (veterinarios[i].getIdVeterinario()==idVeterinario){
            return veterinarios[i];
        }
    }
}

std::vector<Veterinario> VeterinarioDao::list(){
    return veterinarios;
}