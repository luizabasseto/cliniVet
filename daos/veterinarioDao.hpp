#include <vector>
#include "../entidades/veterinario.hpp"  

class VeterinarioDao {
private:
    std::vector<Veterinario> veterinarios;

public:
    void create(Veterinario veterinario);
    void update(int id, Veterinario veterinarioAtualizado);
    void remove(int id);
    Veterinario retrieve(int id);
    std::vector<Veterinario> list();
};
