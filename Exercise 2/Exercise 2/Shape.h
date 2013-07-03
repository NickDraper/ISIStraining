#ifndef DEF_shape_h
#define DEF_shape_h
#include <string>

class Shape
{
public:
  Shape();
  Shape(std::string type, double val1, double val2, int sides);
  Shape(const Shape& s);
  ~Shape();
  double Perimeter(){return 0;};
  double Area(){return 0;};
  std::string Type(){return mtype;};
  int Sides(){return msides;};
  double GetVal1(){return mval1;};
  double GetVal2(){return mval2;};
private:
  int msides;
  std::string mtype;
  double mval1, mval2;
};


#endif