#ifndef DEF_square_h
#define DEF_square_h
#include "shape.h"
class Square :
  public Shape
{
public:
  Square();
  Square(double side);
  const double Perimeter() const;
  const double Area() const;
  const double GetSide() const;
  ~Square();
};


#endif