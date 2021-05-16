#include"quarto.hpp"
#include <iostream>
#include "reserva.hpp"

using namespace std;

int main() {

Reserva R1;

R1.quartos();

R1.adicionaCliente("Zezo", 12345);
R1.adicionaCliente("Carlinhos", 54321);
R1.adicionaCliente("Buriqui", 21354);

R1.adicionaFuncionario("Joao Alberto", "000");
R1.adicionaFuncionario("Tonico", "000");

int option = 1;
string Cliente; 
int cpfCliente;
string Func, CpfFunc;

	while (option != 0)
	{
		cout << "\n1-Cadastrar Cliente: "<<endl;
		cout << "2-Cadastrar Funcionario: "<<endl;
		cout << "3-Listar Quartos: "<<endl;
		cout << "4-Efetuar Reserva: "<<endl;
		cout << "5-Consulta Geral: "<<endl;
		cout << "0-Sair: " << endl;

		cin >> option;

    cout << "\n\n";

    switch(option){
      case 1:
      cout << "\nCadastrar Cliente: "<< endl;
			cout << "Informe Nome: ";
			cin >> Cliente;
			cout << "Informe Cpf: ";
      cin >> cpfCliente;
      R1.adicionaCliente(Cliente, cpfCliente);
      break;

      case 2:
			cout << "\nCadastrar Funcionario: " << endl;
			cout << "Informe Nome: ";
			cin >> Func;
			cout << "Informe Cpf: ";
			cin >> cpfCliente;
			R1.adicionaFuncionario(Func, CpfFunc);
			break;

      case 3:
			R1.exibeQuartos();
			break;

      case 4:
			R1.lista();
			cout << "\n\nNova Reserva: " << endl;
			cout << "\nInforme do Cliente: " << endl;
			cin >> Cliente;
			cout << "\nInforme do Atendente: : \n" << endl;
			cin >> Func;
			R1.novaReserva(Cliente, Func);
			break;
      
      case 5:
			R1.infoReservas();
			break;
    }
  }  
}