#include <vector>
#include "../entidades/encaminhamento.hpp"
#include "../entidades/data.hpp"
#include "../entidades/veterinario.hpp"
#include "../entidades/funcionario.hpp"

#pragma once

class EncaminhamentoDao{
private:
    std::vector<Encaminhamento> encaminhamentos;
    Funcionario funcionario1;
    Funcionario funcionario2;
    Veterinario veterinario1;
    Veterinario veterinario2;

public:
    EncaminhamentoDao(); 

    void create(Encaminhamento encaminhamento);
    void update(int idEncaminhamento, Encaminhamento encaminhamentoAtualizado);
    void remove(int idEncaminhamento);
    Encaminhamento retrieve(int idEncaminhamento);
    std::vector<Encaminhamento> list();
};

EncaminhamentoDao::EncaminhamentoDao()
    : funcionario1(1, Data(10, 8, 2024), Data(0, 0, 0), 'A'),
      funcionario2(2, Data(12, 1, 2024), Data(0, 0, 0), 'A'),
      veterinario1(1,  Data(5, 6, 2024), Data(0, 0, 0), 'A', "CRMV-1234"),
      veterinario2(2,  Data(7, 9, 2024), Data(0, 0, 0), 'A', "CRMV-5678")
{
    encaminhamentos = {
        Encaminhamento(1, Data(15, 8, 2024), "Requisito um exame de sangue para o pet Filipo.", &funcionario1, &veterinario2),
        Encaminhamento(2, Data(20, 1, 2025), "Requisito uma ultrassonografia abdominal P.A. para a pet Amanda.", &funcionario2, &veterinario1),
        Encaminhamento(3, Data(3, 2, 2025), "Requisito uma radiografia de crânio para a pet Jussara.", &funcionario1, &veterinario2),
        Encaminhamento(4, Data(8, 2, 2025), "Requisito uma biópsia ecoguiada para o Rex.", &funcionario2, &veterinario1)};
}