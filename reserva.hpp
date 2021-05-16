#ifndef Reserva_H
#define Reserva_H

#include "quarto.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Reserva {

  public:

    Reserva();
    
    int id;
    int getId();
    void adicionaCliente(string nomeCliente, int cpf);
    void adicionaFuncionario(string nome, string numFunc);
    void infoReservas();
    void lista();
    void quartos();
    void exibeQuartos();
    void novaReserva(string cliente, string funcionario);

  private:
    int TtReservas;
    Quarto quartoshotel[5];
    vector <Cliente> clientes;
    vector <Funcionario> funcionarios;
};



#endif