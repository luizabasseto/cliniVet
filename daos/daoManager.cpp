#include "daoManager.hpp"

DaoManager::DaoManager() {
    // Inicializa os DAOs
    consultaDao = new ConsultaDao();  
    animalDao = new AnimalDao();
    encaminhamentoDao = new EncaminhamentoDao();
    exameDao = new ExameDao();
    funcionarioDao = new FuncionarioDao();
    veterinarioDao = new VeterinarioDao();     
}

ConsultaDao* DaoManager::getConsultaDao() { 
    return consultaDao; 
}

AnimalDao* DaoManager::getAnimalDao() { 
    return animalDao; 
} 

EncaminhamentoDao* DaoManager::getEncaminhamentoDao() { 
    return encaminhamentoDao; 
}

ExameDao* DaoManager::getExameDao() { 
    return exameDao; 
}

FuncionarioDao* DaoManager::getFuncionarioDao() { 
    return funcionarioDao; 
}

VeterinarioDao* DaoManager::getVeterinarioDao() { 
    return veterinarioDao; 
}