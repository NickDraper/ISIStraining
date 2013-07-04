#include "stdafx.h"
#include "Shape.h"
#include <iostream>

Shape::Shape(): msides(3), mtype("Shape"), mval1(1), mval2(1)
{

}

Shape::Shape(std::string type, double val1, double val2, int sides): msides(sides), mtype(type), mval1(val1), mval2(val2)
{

}

Shape::~Shape()
{

}

const double Shape::Perimeter() const
{
  return 0;
}

const double Shape::Area() const
{
  return 0;
}

const std::string Shape::Type() const
{
  return mtype;
}

const int Shape::Sides() const
{
  return msides;
}