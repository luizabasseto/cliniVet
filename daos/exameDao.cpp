#include "exameDao.hpp"

ExameDao::ExameDao() {
    animal2 = new Animal(5, "Betinho", Data(10, 8, 2024), 'M');
    animal5 = new Animal(6, "Marcelo", Data(12, 1, 2024), 'M');

    funcionario1 = new Funcionario(1, "Dr Joao", Data(10, 8, 2024), Data(0, 0, 0), 'A', IMAGINOLOGISTA);
    funcionario2 = new Funcionario(2, "Dra Amanda", Data(12, 1, 2024), Data(0, 0, 0), 'A', IMAGINOLOGISTA);

    veterinario1 = new Veterinario(1, "Dr Fabricio", Data(5, 6, 2024), Data(0, 0, 0), 'A', MEDICO, std::string("CRMV-1234"));
    veterinario2 = new Veterinario(2, "Dra Amanda", Data(7, 9, 2024), Data(0, 0, 0), 'A', MEDICO, std::string("CRMV-5678"));

    encaminhamento432 = new Encaminhamento(1, Data(5, 6, 2024), "Encaminhamento para exame de sangue.", funcionario1, veterinario1);
    encaminhamento440 = new Encaminhamento(2, Data(7, 9, 2024), "Encaminhamento para radiografia.", funcionario2, veterinario2);

    exames = {
        Exame(1, Data(15, 8, 2024), animal2, encaminhamento432, "Hemograma completo", 'N'),
        Exame(2, Data(20, 1, 2025), animal5, encaminhamento440, "Radiografia de tórax", 'N'),
        Exame(3, Data(15, 2, 2023), animal2, encaminhamento432, "Ultrassom", 'N'),
        Exame(4, Data(20, 3, 2025), animal5, encaminhamento440, "Radiografia da pata", 'N'),
        Exame(5, Data(11, 5, 2023), animal2, encaminhamento432, "Exames de sangue", 'F'),
        Exame(6, Data(21, 8, 2025), animal5, encaminhamento440, "Colonoscopia", 'N'),
    };
}

void ExameDao::create(Exame exame){
    exames.push_back(exame);
}

void ExameDao::update(int idExame, Exame exame){
    for (size_t i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            exames[i] = exame;
        }
    }
}

void ExameDao::remove(int idExame){
    for (size_t i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            exames.erase(exames.begin()+i);
        }
    }
}

Exame* ExameDao::retrieve(int idExame){
    for (size_t i = 0; i < exames.size(); i++){
        if (exames[i].getIdExame()==idExame){
            return &exames[i];
        }
    }
    return nullptr;
}

std::vector<Exame> ExameDao::list(){
    return exames;
}