#ifndef cliente_hpp
#define cliente_hpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cliente {
  public:
    
    Cliente(string nome_cliente, int cpf);

    void setNomeCliente(string nomeCliente);
    string getNomeCliente();

    void setCpf(int cpf);
    int getCpf();

    void imprimeNome();
    void setIdRes(int id);


  private:
    string nomeCliente;
    int cpf;
    vector <int> IdRes;
  
};
#endif