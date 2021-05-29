#include "Retangle.hpp"

void Retangle::calculateArea(){

  cout << "Digite a base do retangulo: ";
  cin >> base;
  cout << "Digite a altura do retangulo: ";
  cin >> altura;
  area = base*altura;
  cout << "O valor da area do retangulo eh: " << area << endl << endl;
}
