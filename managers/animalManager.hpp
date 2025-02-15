#pragma once
#include <iostream>
#include <vector>
#include "../entidades/animal.hpp"
#include "../daos/daoManager.hpp"
class AnimalManager {
    DaoManager* daoManager;

public:
    AnimalManager(DaoManager* daoM);

    void getAnimal(int idAnimal);
    void listAnimais();

};