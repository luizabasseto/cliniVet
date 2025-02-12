#include <vector>
#include "../entidades/encaminhamento.hpp" 
#include "../entidades/data.hpp"

class EncaminhamentoDao{
    std::vector<Encaminhamento> encaminhamentos = {
        
        Encaminhamento(1, "Requisito um exame de sangue para o pet Filipo.", Data(15, 8, 24)),
        Encaminhamento(2, "Requisito uma ultrassonografia abdominal P.A. para a pet Amanda.", Data(20, 1, 25)),
        Encaminhamento(3, "Requisito uma radiografia de crânio para a pet Jussara.", Data(3, 2, 25)),
        Encaminhamento(4, "Requisito uma biópsia ecoguiada para o Rex.", Data(8, 2, 25))
    };
    public:
        void create(Encaminhamento encaminhamento);
        void update(int idEncaminhamento, Encaminhamento encaminhamentoAtualizado);
        void remove(int idEncaminhamento);
        Encaminhamento retrieve(int idEncaminhamento);
        std::vector<Encaminhamento> list();
};