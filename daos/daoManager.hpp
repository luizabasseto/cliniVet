#include <iostream>
#include "consultaDao.hpp"
#include "animalDao.hpp"
#include "encaminhamentoDao.hpp"
#include "exameDao.hpp"
#include "veterinarioDao.hpp"
#include "funcionarioDao.hpp"

class ManagerDao{
    private:
        ConsultaDao consultaDao;
        AnimalDao animalDao;
        EncaminhamentoDao encaminhamentoDao;
        ExameDao exameDao;
        FuncionarioDao funcionarioDao;
        VeterinarioDao veterinarioDao;

    public:
        ConsultaDao& getConsultaDao();
        AnimalDao& getAnimalDao();
        EncaminhamentoDao& getEncaminhamentoDao();
        ExameDao& getExameDao();
        FuncionarioDao& getFuncionarioDao();
        VeterinarioDao& getVeterinarioDao();

};