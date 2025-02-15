#pragma once
#include <iostream>
#include <string>
#include "data.hpp"
#include "animal.hpp"
#include "veterinario.hpp"

class Consulta{
private:
    int id;
    Data horarioConsulta; 
    std::string anamnese;
    float peso;
    char status; // P = pendente F = finalizada
    Animal* animal;
    Veterinario* veterinario;

public:
    Consulta(int id, Data data, std::string anamnese, float peso, char status, Animal* animal, Veterinario* veterinario);
    Consulta();

    int getIdConsulta();
    void setIdConsulta(int idConsulta);
    
    Data getHorarioConsulta();
    void setHorarioConsulta(Data data);
    
    std::string getAnamnese();
    void setAnamnese(std::string anamnese);
    
    float getPeso();
    void setPeso(float peso);
    
    char getStatus();
    void setStatus(char status);

    Animal* getAnimal();
    void setAnimal(Animal* animal);

    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* veterinario);

    void toString();
};
