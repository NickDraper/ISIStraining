#ifndef DEF_triangle_h
#define DEF_triangle_h
#include "shape.h"
class Triangle :
	public Shape
{
public:
  Triangle();
  Triangle(double height, double width);
  double Perimeter(){return 0;};
  double Area(){return 0;};
  double GetHeight(){return mval1;};
  double GetWidth(){return mval2;};
  ~Triangle();
};
#endif

