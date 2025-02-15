#include <iostream>
#include <vector>
#include "animalManager.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"

AnimalManager::AnimalManager(DaoManager* daoM) : daoManager(daoM) {}

void AnimalManager::getAnimal(int idAnimal){
    Animal animal = daoManager->getAnimalDao()->retrieve(idAnimal);
    std::cout<<"Dados do animal selecionada:";
    animal.toString();  
}

void AnimalManager::listAnimais() {
    std::vector<Animal> animals = daoManager->getAnimalDao()->list();
    std::cout << "Funcionários cadastrados:" << std::endl;
    for (Animal& animal : animals) {
        std::cout << animal.toString() << std::endl;
    }
}