#include <vector>
#include "../entidades/consulta.hpp"
#include "../entidades/data.hpp"

class ConsultaDao{
    std::vector<Consulta> consultas = {
        Consulta(1, Data(10, 1, 2),  "", 0, 'P', 2, 1),
        Consulta(2,  Data(12, 1, 2), "", 0, 'P', 1, 1)
    };
    public:
        void create(Consulta consulta);
        void update(int idConsulta, Consulta consulta);
        void remove(int idConsulta);
        Consulta retrieve(int idConsulta);
        std::vector<Consulta> list();
};





