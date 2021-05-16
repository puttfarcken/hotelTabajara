#include "reserva.hpp"
#include <iostream>
#include<string>
#include <vector>

using namespace std;


int id = 0;

Reserva::Reserva(){

}

void Reserva::adicionaCliente(string nomeCliente, int cpf){
  clientes.push_back(Cliente(nomeCliente, cpf));
  cout << "Cliente adicionado: " << " " << nomeCliente<< " CPF: " << cpf << endl;
}

void Reserva::adicionaFuncionario(string nome, string numFunc){
  funcionarios.push_back(Funcionario(nome, numFunc));
  cout << "Funcionário adicionado: " << nome << " " << " id: " << getId() << endl;
}

void Reserva::infoReservas(){
  cout << "Total Reservas: " << TtReservas << endl;
  cout << "\nClientes Cadastrados: zn" << endl;

		for (int i = 0; i < clientes.size(); i++){
			clientes[i].imprimeNome();
    }
    cout << "Funcionários Cadastados: \nn" << endl;

		for (int i = 0; i < clientes.size(); i++){
			funcionarios[i].imprimeNome();
    }
    
}

int Reserva::getId(){
	return ++id;
}

void Reserva::lista(){
  for (int i = 0; i < funcionarios.size(); i++)
	{
		funcionarios[i].imprimeNome();
	}
  for (int i = 0; i < clientes.size(); i++)
	{
		clientes[i].imprimeNome();
	}
}

void Reserva::quartos(){
    quartoshotel[0].setQuarto("Simples", 1);
    quartoshotel[1].setQuarto("Simples", 2);
    quartoshotel[2].setQuarto("Simples", 2);
    quartoshotel[3].setQuarto("Luxo", 1);
    quartoshotel[4].setQuarto("Luxo", 1);
}

void Reserva::exibeQuartos(){
    	for (int i = 0; i < 5; i++)
	{
			quartoshotel[i].detalhes();
	}
}

void Reserva::novaReserva(string cliente, string funcionario){

  int tipoquarto, camas, count=0;
  
  cout << "Tipo Quarto -  1: Simples  2: Luxo" << endl;
  cin >> tipoquarto;
  if (tipoquarto == 1 || tipoquarto ==2) {
		cout << "Escolha a quabtidade de camas: (1 ou 2)" << endl;
		cin >> camas;
		if (camas == 1 || camas == 2){
      for (int i = 0; i < 5; i++)
			{

				if (quartoshotel[i].getQtdCamas() == camas && quartoshotel[i].getLivre() == false && quartoshotel[i].getQtdCamas() == camas)
				{
					count++;
					cout << "Quartos disponiveis: " << endl;
					quartoshotel[i].detalhes();

				}		
			}
      if (count == 0){
        cout << "Nao ha Quartos disponiveis: " << endl;
				novaReserva(cliente, funcionario);
      }
    }
    cout << "numero invalido:" << endl;
		novaReserva(cliente, funcionario);
  }
  for (int i = 0; i < 5; i++)
		{
			if (quartoshotel[i].getQtdCamas() == camas && quartoshotel[i].getLivre() == false )
			{
				quartoshotel[i].setLivre();
				TtReservas += getId();
				for (int i = 0; i < clientes.size(); i++)
				{
					if (clientes[i].getNomeCliente()== cliente)
					{
						clientes[i].setIdRes(id);
						cout << "Reserva feito com sucesso\n" << endl;
					}
				}
			}
			
		}  
}