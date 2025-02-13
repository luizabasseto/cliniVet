#include "funcionario.hpp"
#include <string>
#include "data.hpp"

#pragma once

class Veterinario : public Funcionario{
    private:
    std::string crmv;


public:
    Veterinario(int idV, Data dataEntrada, Data dataSaida, char status, std::string crmv);

    std::string getCrmv();
    void setCrmv(std::string crmv);

    void toString() override;
    
    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* veterinario);
};

