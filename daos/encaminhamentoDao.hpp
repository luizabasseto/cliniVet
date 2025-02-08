#include <vector>
#include "../entidades/encaminhamento.hpp"  

class EncaminhamentoDao{
    std::vector<Encaminhamento> consultas = {
        Encaminhamento(1, {15, 8, 2024}, "Requisito um exame de sangue para o pet Filipo."),
        Encaminhamento(2, {20, 1, 2025}, "Requisito uma ultrassonografia abdominal P.A. para a pet Amanda."),
        Encaminhamento(3, {3, 2, 2025}, "Requisito uma radiografia de crânio para a pet Jussara."),
        Encaminhamento(4, {8, 2, 2025}, "Requisito uma biópsia ecoguiada para o Rex.")
    };
    public:
        void create(Encaminhamento encaminhamento);
        void update(int idEncaminhamento, Encaminhamento encaminhamentoAtualizado);
        void remove(int idEncaminhamento);
        Encaminhamento retrieve(int idEncaminhamento);
        std::vector<Encaminhamento> list();
};