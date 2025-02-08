#include <iostream>
#include <vector>
#include "animal.cpp"

#pragma once

class Consulta{
    int id;
    Data horarioConsulta; 
    std::string anamnese;
    float peso;
    char status;
    Animal* animal;
    // o tutor precisa mesmo estar vinculado à consulta? o animal já não basta?
public:
    Consulta(int id, Data data, std::string anamnese, float peso, char status, Animal* animal);
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
    void toString();
    Animal* getAnimal();
    void setAnimal(Animal* animal);
    //adicionar médico veterinário?

    void cancelarConsulta();
    void remarcarConsulta(Data novaData);
    void finalizarConsulta();

};