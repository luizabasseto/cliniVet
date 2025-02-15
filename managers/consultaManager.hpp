#include <iostream>
#include <vector>
#include "../entidades/consulta.hpp"
#include "../daos/daoManager.hpp"
#include "../entidades/data.hpp"

#pragma once

class ConsultaManager{
    DaoManager* daoManager;
    public: 
        ConsultaManager(DaoManager* daoManager);

        void getConsulta(int idConsulta);

        void listConsultas(int idAnimal);

        void checarAgenda(std::string tipoVisao);

        //Receita criarReceita(int idReceita);

        void setPedidoExame(int idConsulta, std::string documentoExame, std::string idRequisitor, int idRecebeRequisicao, Data dataRequisicao);
        
        void cancelarConsulta(int idConsulta);
        
        void remarcarConsulta(Data novaData);
        
        void encerrarConsulta(int idConsulta);
};