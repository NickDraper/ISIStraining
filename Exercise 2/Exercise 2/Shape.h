#pragma once
#include <string>

class Shape
{
public:
  Shape(void);
  Shape(std::string type, double val1, double val2, int sides);
  Shape(const Shape& s);
  ~Shape(void);
  double Perimeter(void){return 0;};
  double Area(void){return 0;};
  std::string Type(void){return mtype;};
  int Sides(void){return msides;};
  double GetVal1(void){return mval1;};
  double GetVal2(void){return mval2;};
private:
  int msides;
  std::string mtype;
  double mval1, mval2;
};

