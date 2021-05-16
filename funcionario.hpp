#ifndef funcionario_hpp
#define funcionario_hpp

#include <iostream>
#include <string>
using namespace std;

class Funcionario {

  public:

    Funcionario(string nome, string numFunc);

    void setNome(string nome);
    string getNome();

    void imprimeNome();


  private:
    string nome;
};

#endif