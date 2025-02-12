#include <vector>
#include "../entidades/exame.hpp"  
#include "../entidades/data.hpp"

#pragma once

class ExameDao {
private:
    std::vector<Exame> exames = {
        
        Exame(1, Data(15, 8, 24), 1, 2, "Exame de sangue para o pet Filipo.", 'N'),
        Exame(2, Data(20, 1, 25), 1, 2, "Ultrassonografia abdominal para a pet Amanda.", 'N'),
        Exame(3, Data(3, 2, 25), 1, 2, "Radiografia de crânio para a pet Jussara.", 'N'),
        Exame(4, Data(8, 2, 25), 1, 2, "Biópsia ecoguiada para o Rex.", 'N')
    };

public:
    void create(Exame exame);
    void update(int id, Exame exameAtualizado);
    void remove(int id);
    Exame retrieve(int id);
    std::vector<Exame> list();
};
