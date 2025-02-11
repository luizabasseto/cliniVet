#include "consultaDao.hpp"

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