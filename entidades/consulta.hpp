#include <iostream>
#include <vector>
#include "animal.cpp"
#include "veterinario.cpp"

#pragma once

class Consulta{
    int id;
    Data horarioConsulta; 
    std::string anamnese;
    float peso;
    char status; // P = pendente F = finalizada
    int idAnimal;
    int idVeterinario;

public:
    Consulta(int id, Data data, std::string anamnese, float peso, char status, int idAnimal, int idVeterinario);
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

    int getIdAnimal();
    void setIdAnimal(int idAnimal);

    int getIdVeterinario();
    void setIdVeterinario(int idVeterinario);

    void toString();

    // Veterinario* getVeterinario();
    // void setVeterinario(Veterinario* veterinario);

    // Animal* getAnimal();
    // void setAnimal(Animal* animal);


};