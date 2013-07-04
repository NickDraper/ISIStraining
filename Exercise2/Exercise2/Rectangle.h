#ifndef DEF_rectangle_h
#define DEF_rectangle_h
#include "shape.h"
class Rectangle :
  public Shape
{
public:
  Rectangle();
  Rectangle(double height, double width);
  const double Perimeter() const;
  const double Area() const;
  const double GetHeight() const;
  const double GetWidth() const;
  ~Rectangle();
};

#endif
