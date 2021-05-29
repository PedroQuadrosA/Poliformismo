#include "Form.hpp"

class Triangle : public Form
{
  public:
  void calculateArea();
  private:
  float base;
  float altura;
  float area;
};