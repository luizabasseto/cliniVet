#include <vector>
#include "../entidades/animal.hpp"  

class AnimalDao{
    std::vector<Animal> consultas = {
        Animal(3, "Filipa", {15, 8, 2015}, 'F'),
        Animal(4, "Bartolomeu", {20, 5, 2017}, 'M')
    };
    public:
        void create();
        void update();
        void remove();
        Animal retrieve(int idAnimal);
        std::vector<Animal> list();
};