#include <vector>
#include "../entidades/encaminhamento.hpp" 
#include "../entidades/data.hpp"

#pragma once

class EncaminhamentoDao{
    std::vector<Encaminhamento> encaminhamentos = {
        
        Encaminhamento(1, Data(15, 8, 24), "Requisito um exame de sangue para o pet Filipo.", 1, 2),
        Encaminhamento(2, Data(20, 1, 25), "Requisito uma ultrassonografia abdominal P.A. para a pet Amanda.", 2, 1),
        Encaminhamento(3,  Data(3, 2, 25), "Requisito uma radiografia de crânio para a pet Jussara.", 3, 2),
        Encaminhamento(4, Data(8, 2, 25), "Requisito uma biópsia ecoguiada para o Rex.", 4, 5)
    };
    public:
        void create(Encaminhamento encaminhamento);
        void update(int idEncaminhamento, Encaminhamento encaminhamentoAtualizado);
        void remove(int idEncaminhamento);
        Encaminhamento retrieve(int idEncaminhamento);
        std::vector<Encaminhamento> list();
};