#include "funcionario.hpp"
#include <string>
#include "data.hpp"

#pragma once

class Veterinario : public Funcionario{
    private:
    std::string crmv;


public:
    Veterinario(int idV, std::string nome, Data dataEntrada, Data dataSaida, char status, Cargo cargo, std::string crmv);

    std::string getCrmv();
    void setCrmv(std::string crmv);

    virtual std::string toString() override;
    
    Veterinario* getVeterinario();
};

