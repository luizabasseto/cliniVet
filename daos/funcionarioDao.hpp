#include <vector>
#include "../entidades/funcionario.hpp"  

class FuncionarioDao{
    std::vector<Funcionario> funcionarios = {
        Funcionario(3,{15, 8, 2015},{0, 0, 000}, 'A'),
        Funcionario(4,{20, 5, 2017},{0, 0, 000}, 'A')
    };
    public:
        void create(Funcionario funcionario);
        void update(int idFuncionario, Funcionario funcionario);
        void remove(int idFuncionario);
        Funcionario retrieve(int idFuncionario);
        std::vector<Funcionario> list();
};