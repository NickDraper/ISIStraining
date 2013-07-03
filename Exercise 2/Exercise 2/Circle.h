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
  ~Circle();
};

#endif
