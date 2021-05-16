#include "funcionario.hpp"

#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario(string nome, string numFunc){
  this->nome = nome;
}

void Funcionario::setNome(string nome){
  this->nome = nome;
}

string Funcionario::getNome(){
  return this->nome;
}

void Funcionario::imprimeNome(){
  	cout << "Nome Funcionário: " << nome << endl;
}



