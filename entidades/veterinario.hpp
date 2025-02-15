#include "funcionario.hpp"
#include <string>
#include "data.hpp"

#pragma once

class Veterinario : public Funcionario{
    private:
    std::string crmv;


public:
    Veterinario(int idV, Data dataEntrada, Data dataSaida, char status, Cargo cargo, std::string crmv);

    std::string getCrmv();
    void setCrmv(std::string crmv);

    std::string toString() override;
    
    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* veterinario);
};

