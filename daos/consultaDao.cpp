#include "consultaDao.hpp"

ConsultaDao::ConsultaDao()
    : animal1(1, "Antonia", Data(10, 8, 2024), 'F'),
      animal2(2, "Marcelo", Data(12, 1, 2024), 'M'),
      veterinario3(1, Data(5, 6, 2024), Data(0, 0, 0), 'A', "CRMV-1234"),
      veterinario4(2, Data(7, 9, 2024), Data(0, 0, 0), 'A', "CRMV-5678")
{
    consultas = {
        Consulta(1, Data(15, 8, 2024), "Antonia está com diabetes canina.", 10, 'F', &animal1, &veterinario3),
        Consulta(2, Data(20, 1, 2025), "Marcelo está doentezinho.", 8, 'F', &animal2, &veterinario4)};
}

void ConsultaDao::create(Consulta consulta){
    consultas.push_back(consulta);
}

void ConsultaDao::update(int idConsulta, Consulta consulta){
    for (int i = 0; i < consultas.size(); i++)
    {
        if (consultas[i].getIdConsulta()==idConsulta)
        {
            consultas[i] = consulta;
        }
        
    }
    
}

void ConsultaDao::remove(int idConsulta){

    for (int i = 0; i < consultas.size(); i++)
    {
        if (consultas[i].getIdConsulta()==idConsulta)
        {
            consultas.erase(consultas.begin()+i);
        }
        
    }
}

Consulta ConsultaDao::retrieve(int idConsulta){
    for (int i = 0; i < consultas.size(); i++)
    {
        if (consultas[i].getIdConsulta()==idConsulta)
        {
            return consultas[i];
        }
        
    }
}

std::vector<Consulta> ConsultaDao::list(){
    return consultas;
}