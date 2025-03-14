#include "animalDao.hpp"

void AnimalDao::create(Animal animal){
    animais.push_back(animal);
}

void AnimalDao::update(int idAnimal, Animal animal){
    for (size_t i = 0; i < animais.size(); i++)
    {
        if (animais[i].getId()==idAnimal)
        {
            animais[i] = animal;
        }
        
    }
    
}

void AnimalDao::remove(int idAnimal){
    for (size_t i = 0; i < animais.size(); i++)
    {
        if (animais[i].getId()==idAnimal)
        {
            animais.erase(animais.begin()+i);
        }
        
    }
}

Animal* AnimalDao::retrieve(int idAnimal) {
    for (size_t i = 0; i < animais.size(); i++) {
        if (animais[i].getId() == idAnimal) {
            return &animais[i]; 
        }
    }
    return nullptr; 
}


std::vector<Animal> AnimalDao::list(){
    return animais;
}