#include "stdafx.h"
#include "Shape.h"


Shape::Shape()
{
  mtype = "Shape";
  mval1 = 1;
  mval2 = 1;
  msides = 3;
}


Shape::~Shape()
{

}


Shape::Shape(std::string type, double val1, double val2, int sides)
{
  mtype = type;
  mval1 = val1;
  mval2 = val2;
  msides = sides;
}
