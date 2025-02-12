#include "funcionario.hpp"
#include <string>

#pragma once

class Veterinario : public Funcionario{
    private:
    std::string crmv;


public:
    Veterinario(int idV, std::string login, std::string senhaHash, Data dataEntrada, Data dataSaida, char status, std::string crmv);

    std::string getCrmv();
    void setCrmv(std::string crmv);

    void toString();
    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* veterinario);
}

