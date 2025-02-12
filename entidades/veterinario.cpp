// #include <iostream>
// #include <string>
// #include "veterinario.hpp"

// Veterinario::Veterinario(int idV, std::string login, std::string senhaHash, Data dataEntrada, Data dataSaida, char status, std::string crmv)
//     : Funcionario(idV, login, senhaHash, dataEntrada, dataSaida, status), crmv(crmv) {}

// std::string Veterinario::getCrmv(){
//     return crmv;
// }

// void Veterinario::setCrmv(std::string crmv)
// {
//     this->crmv = crmv;
// }

// void Veterinario::toString(){
//     std::cout << "CRMV: " << crmv << "\n";
//     std::cout << "Funcionário ID: " << idV << "\n";
//     std::cout << "Login: " << login << "\n";
//     std::cout << "Senha: " << senhaHash << "\n";
//     std::cout << "Data de Entrada: " << dataEntrada.toString() << "\n";
//     std::cout << "Data de Saída: " << dataSaida.toString() << "\n";
//     std::cout << "Status: " << (status == '1' ? "Ativo" : "Inativo") << "\n";
// }

// Veterinario *Veterinario::getVeterinario()
// {
//     return this;
// }

// void Veterinario::setVeterinario(Veterinario *veterinario)
// {
//     this->idV = veterinario->idV;
//     this->login = veterinario->login;
//     this->senhaHash = veterinario->senhaHash;
//     this->dataEntrada = veterinario->dataEntrada;
//     this->dataSaida = veterinario->dataSaida;
//     this->status = veterinario->status;
//     this->crmv = veterinario->crmv;
// }
