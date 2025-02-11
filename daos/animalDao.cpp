#include "animalDao.hpp"

void AnimalDao::create(Animal animal){
    animais.push_back(animal);
}

void AnimalDao::update(int idAnimal, Animal animal){
    for (int i = 0; i < animais.size(); i++)
    {
        if (animais[i].getId()==idAnimal)
        {
            animais[i] = animal;
        }
        
    }
    
}

void AnimalDao::remove(int idAnimal){
    for (int i = 0; i < animais.size(); i++)
    {
        if (animais[i].getId()==idAnimal)
        {
            animais.erase(animais.begin()+i);
        }
        
    }
}

Animal AnimalDao::retrieve(int idAnimal){
    for (int i = 0; i < animais.size(); i++)
    {
        if (animais[i].getId()==idAnimal)
        {
            return animais[i];
        }
        
    }
}

std::vector<Animal> AnimalDao::list(){
    return animais;
}