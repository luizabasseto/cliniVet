#include <iostream>
#include <vector>
#include "../entidades/consulta.hpp"

class ConsultaManager{
    DaoManager* daoManager;
    public: 
        ConsultaManager(DaoManager* daoManager);

        void getConsulta(int idConsulta);

        void listConsultas(int animalId);

        void checarAgenda(std::string tipoVisao);

        //Receita criarReceita(int idReceita);

        void setPedidoExame(int idConsulta, std::string documentoExame, int idRequisitor, int idRecebeRequisicao, Data dataRequisicao);
        
        void cancelarConsulta(int idConsulta);
        
        void remarcarConsulta(Data novaData);
        
        void encerrarConsulta(int idConsulta);
};