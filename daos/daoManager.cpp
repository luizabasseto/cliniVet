#include "daoManager.hpp"

ConsultaDao& getConsultaDao() { 
    return consultaDao; 
}

AnimalDao& getAnimalDao() { 
    return animalDao; 
} 

EncaminhamentoDao& getEncaminhamentoDao() { 
    return encaminhamentoDao; 
}

ExameDao& getExameDao() { 
    return exameDao; 
}

FuncionarioDao& getFuncionarioDao() { 
    return funcionarioDao; 
}

VeterinarioDao& getVeterinarioDao() { 
    return veterinarioDao; 
}