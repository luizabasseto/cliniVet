#include <iostream>
#include <vector>
#include "animalManager.hpp"
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"

AnimalManager::AnimalManager(DaoManager* daoM) : daoManager(daoM) {}

void AnimalManager::getAnimal(int idAnimal){
    Animal* animal = daoManager->getAnimalDao()->retrieve(idAnimal);
    if (animal) {
        std::cout << "Dados do animal selecionado:" << std::endl;
        std::cout << animal->toString() << std::endl;
    } else {
        std::cout << "Animal não encontrado." << std::endl;
    }
    
}


void AnimalManager::listAnimais() {
    std::vector<Animal> animals = daoManager->getAnimalDao()->list();
    std::cout << "Animais cadastrados:" << std::endl;
    for (Animal& animal : animals) {
        std::cout << animal.toString() << std::endl;
    }
}