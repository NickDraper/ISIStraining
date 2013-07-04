#ifdef _WIN32
#define _USE_MATH_DEFINES
#endif
#include "stdafx.h"
#include "Circle.h"
#include <cmath>

Circle::Circle()
{
}

Circle::Circle(double radius)
{

}

Circle::~Circle()
{

}

double Circle::Perimeter()
{
  return M_2_PI*mval1;
}

double Circle::Area()
{
  return (mval1*mval1)*M_PI;
}