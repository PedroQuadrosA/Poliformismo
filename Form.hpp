#include <iostream>
using namespace std;
#ifndef Form_hpp
#define Form_hpp

class Form {

  public:
  virtual void calculateArea() = 0;
  protected:
  float area;
};
#endif