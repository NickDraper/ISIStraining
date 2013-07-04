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
  double Perimeter(){return 0;};
  double Area(){return 0;};
  double GetRadius(){return mval1;};
  ~Circle();
};

#endif
