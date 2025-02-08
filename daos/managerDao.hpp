#include <iostream>
#include "consultaDao.hpp"
#include "animalDao.hpp"
#include "encaminhamentoDao.hpp"
#include "exameDao.hpp"

class ManagerDao{
    private:
        ConsultaDao consultaDao;
        AnimalDao animalDao;
        EncaminhamentoDao encaminhamentoDao;
        ExameDao exameDao;

    public:
        ConsultaDao& getConsultaDao() { 
            return consultaDao; //eu não tinha certeza se o return ficava aqui, ou separado em um .cpp
        }

        AnimalDao& getAnimalDao() { 
            return animalDao; 
        } 

        EncaminhamentoDao& getEncaminhamentoDao() { 
            return encaminhamentoDao; 
        }

        ExameDao& getExameDao() { 
            return exameDao; 
        }

};