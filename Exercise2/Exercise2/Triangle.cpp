#include "stdafx.h"
#include "Triangle.h"
using std::sqrt;

Triangle::Triangle()
{
}

Triangle::Triangle(double height, double width)
{
}

Triangle::~Triangle()
{
}

double Triangle::Perimeter()
{
  //perimeter assumes right angled triangle as it's easiest to do and it can't be scalene as you can't calulate the perimeter of a scalene with only base and height 
  return sqrt((mval1*mval1)+(mval2*mval2));
}

double Triangle::Area()
{
  return (mval1 * mval2)/2;
}