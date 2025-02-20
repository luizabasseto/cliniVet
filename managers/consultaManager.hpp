#include <iostream>
#include <vector>
#include "../entidades/consulta.hpp"
#include "../daos/daoManager.hpp"
#include "../entidades/data.hpp"
#include "../entidades/funcionario.hpp"
#include "../entidades/veterinario.hpp"
#include "./exameManager.hpp"

#pragma once

class ConsultaManager{
    DaoManager* daoManager;
    ExameManager* exameManager;
    public: 
        ConsultaManager(DaoManager* daoManager, ExameManager* exameManager);

        Consulta getConsulta(int idConsulta);
        
        void setConsulta(int idConsulta, std::string anamnese, float peso);

        std::vector<Consulta> listConsultas(int idAnimal);

        void checarAgenda(std::string tipoVisao);

        //Receita criarReceita(int idReceita);

        void setPedidoExame(int idConsulta, std::string documentoExame, Veterinario* requisitor, Funcionario* recebeRequisicao, Data dataRequisicao, int quantExames);
        
        void cancelarConsulta(int idConsulta);
        
        void remarcarConsulta(Data novaData);
        
        void encerrarConsulta(int idConsulta);
};