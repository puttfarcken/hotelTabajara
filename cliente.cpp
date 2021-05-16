#include "cliente.hpp"

#include <string>
using namespace std;
#include <iostream>


Cliente::Cliente(string nomeCliente, int cpf){
  this->nomeCliente = nomeCliente;
  this->cpf = cpf;
}

void Cliente::setNomeCliente(string nome){
  this-> nomeCliente = nomeCliente;
}

string Cliente::getNomeCliente(){
  return this->nomeCliente;
}

void Cliente::setCpf(int cpf){
  this->cpf = cpf;
}

int Cliente::getCpf(){
  return this->cpf;
}

void Cliente::imprimeNome(){
  	cout << "Nome Cliente: " << nomeCliente << " " << "CPF: " << cpf << endl;
}

void Cliente::setIdRes(int id)
{
	IdRes.push_back (id);
}

