#ifndef DEF_square_h
#define DEF_square_h
#include "shape.h"
class Square :
  public Shape
{
public:
  Square();
  Square(double side);
  double Perimeter(){return 0;};
  double Area(){return 0;};
  double GetSide(){return mval1;};
  ~Square();
};


#endif