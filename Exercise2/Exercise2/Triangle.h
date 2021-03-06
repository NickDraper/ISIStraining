#ifndef DEF_triangle_h
#define DEF_triangle_h
#include "shape.h"
class Triangle :
	public Shape
{
public:
  Triangle();
  Triangle(double height, double width);
  const double Perimeter() const;
  const double Area() const;
  const double GetHeight() const;
  const double GetWidth() const;
  ~Triangle();
};
#endif

