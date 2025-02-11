#include <vector>
#include "../entidades/exame.hpp"  

class ExameDao {
private:
    std::vector<Exame> exames = {
        Exame(1, {15, 8, 2024}, nullptr, nullptr, "Exame de sangue para o pet Filipo.", 'N'),
        Exame(2, {20, 1, 2025}, nullptr, nullptr, "Ultrassonografia abdominal para a pet Amanda.", 'N'),
        Exame(3, {3, 2, 2025}, nullptr, nullptr, "Radiografia de crânio para a pet Jussara.", 'N'),
        Exame(4, {8, 2, 2025}, nullptr, nullptr, "Biópsia ecoguiada para o Rex.", 'N')
    };

public:
    void create(Exame exame);
    void update(int id, Exame exameAtualizado);
    void remove(int id);
    Exame retrieve(int id);
    std::vector<Exame> list();
};
