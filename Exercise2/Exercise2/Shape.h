#ifndef DEF_shape_h
#define DEF_shape_h
#include <string>

class Shape
{
public:
  Shape();
  Shape(std::string type, double val1, double val2, int sides);
  ~Shape();
  double Perimeter(){return 0;};
  double Area(){return 0;};
  std::string Type(){return mtype;};
  int Sides(){return msides;};
protected:
  int msides;
  std::string mtype;
  double mval1, mval2;
};


#endif