#include "quarto.hpp"

#include <iostream>
#include <string>
using namespace std;

void Quarto::setQuarto(string categoria, int qtdCama)
{
	this->categoria = categoria;
	this->qtdCamas = 2;
}

void Quarto::setCategoria(string categoria){
  this-> categoria =  categoria;
}

string Quarto::getCategoria(){
  return this->categoria;
}

void Quarto::setQtdCamas(int qtdCamas){
  this-> qtdCamas = qtdCamas;
}

int Quarto::getQtdCamas(){
  return this->qtdCamas;
}

bool Quarto::getLivre()
{
	return livre;
}
bool Quarto::setLivre(){
	livre = !livre;
	return livre;
}

void Quarto::detalhes()
{
	cout << "Categoria: " << categoria;
  cout << " - Número de camas: " << qtdCamas << endl;
	if (livre)
	{
		cout << "Disponibiliade: Ocupado " <<endl;
	}else cout << "Disponibilidade: Vago " << endl;
}