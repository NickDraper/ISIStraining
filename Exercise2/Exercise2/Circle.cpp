#ifdef _WIN32
#define _USE_MATH_DEFINES
#endif
#include "stdafx.h"
#include "Circle.h"
#include <cmath>
#include <iostream>

Circle::Circle(): Shape("Circle", 1, 1, 1)
{

}

Circle::Circle(double radius): Shape("Circle", radius, radius, 1)
{

}

Circle::~Circle()
{

}

const double Circle::Perimeter() const
{
  return M_2_PI*mval1;
}

const double Circle::Area() const
{
  return (mval1*mval1)*M_PI;
}

const double Circle::GetRadius() const
{
  return mval1;
}