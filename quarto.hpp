#ifndef Quarto_H
#define Quarto_H

#include <iostream>
using namespace std;

class Quarto {
  public:
  Quarto () {};

  void setQuarto(string categoria, int qtdCamas);

  bool setLivre();
	bool getLivre();

  void setCategoria(string categoria);
  string getCategoria();

  void setQtdCamas(int qtdCamas);
  int getQtdCamas();

  void detalhes();

  private:
    string categoria;
    int qtdCamas;
    bool livre;
};

#endif