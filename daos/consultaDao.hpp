#include <vector>
#include "../entidades/consulta.hpp"

class ConsultaDao{
    std::vector<Consulta> consultas = {
        Consulta(1, {10, 12, 2024}, "Consulta de Rotina", 22.5, 'A', new Animal(1, "Rex", {15, 8, 2015}, 'M')),
        Consulta(2, {12, 12, 2024}, "Exame de Sangue", 25.0, 'P', new Animal(2, "Bella", {20, 5, 2017}, 'F'))
    };
    public:
        void create();
        void update();
        void remove();
        Consulta retrieve(int idConsulta);
        std::vector<Consulta> list();
};