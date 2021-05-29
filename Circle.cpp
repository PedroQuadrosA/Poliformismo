#include "Circle.hpp"

void Circle::calculateArea(){
  
  cout << "Digite o Raio: ";
  cin >> radius;
  area = 3.14*(radius*radius);
  cout << "A area do Circulo eh: " << area << endl << endl;
}