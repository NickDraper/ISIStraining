#ifndef DEF_shape_h
#define DEF_shape_h
#include <string>

class Shape
{
public:
  Shape();
  Shape(std::string type, double val1, double val2, int sides);
  virtual ~Shape();
  virtual const double Perimeter() const;
  virtual const double Area() const;
  const std::string Type() const;
  const int Sides() const;
protected:
  int msides;
  std::string mtype;
  double mval1, mval2;
};


#endif