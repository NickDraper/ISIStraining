#ifndef DEF_square_h
#define DEF_square_h
#include "shape.h"
class Square :
  public Shape
{
public:
  Square();
  Square(double side);
  double Perimeter();
  double Area();
  double GetSide(){return mval1;};
  ~Square();
};


#endif