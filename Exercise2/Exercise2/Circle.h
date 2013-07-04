#ifndef DEF_circle_h
#define DEF_circle_h
#include "shape.h"
#include <cmath>
class Circle :
  public Shape
{
public:
  Circle();
  Circle(double radius);
  double Perimeter();
  double Area();
  double GetRadius(){return mval1;};
  ~Circle();
};

#endif
