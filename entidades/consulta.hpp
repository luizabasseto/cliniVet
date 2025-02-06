#include <iostream>
#include <vector>
#include <animal.hpp>

struct Data {
    int dia;
    int mes;
    int ano;
};
typedef struct Data Data;
class Consulta{
    int id;
    Data horarioConsulta; 
    std::string anamnese;
    float peso;
    char status;
    Animal* animal;
    // o tutor precisa mesmo estar vinculado à consulta? o animal já não basta?
public:
    Consulta(int id, Data data, char* anamnese, float peso, char status, Animal* animal);
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
};