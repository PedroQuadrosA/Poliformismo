#include "Triangle.hpp"

void Triangle::calculateArea()
{
  cout << "Digite a base do triangulo: ";
  cin >> base;
  cout << "Digite a altura do triangulo: ";
  cin >> altura;
  area = (base*altura)/2;
  cout << "O valor da area do Triangulo eh: " << area << endl << endl;
}