#ifndef DEF_rectangle_h
#define DEF_rectangle_h
#include "shape.h"
class Rectangle :
  public Shape
{
public:
  Rectangle();
  Rectangle(double height, double width);
  double Perimeter(){return 0;};
  double Area(){return 0;};
  double GetHeight(){return mval1;};
  double GetWidth(){return mval2;};
  ~Rectangle();
};

#endif
