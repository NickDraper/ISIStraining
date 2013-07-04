#include "stdafx.h"
#include "Triangle.h"
#include <iostream>

Triangle::Triangle(): Shape("Triangle", 1, 1, 3)
{

}

Triangle::Triangle(double height, double width): Shape("Triangle", height, width, 3)
{

}

Triangle::~Triangle()
{

}

const double Triangle::Perimeter() const
{
  //perimeter assumes right angled triangle as it's easiest to do and it can't be scalene as you can't calulate the perimeter of a scalene with only base and height 
  return std::sqrt((mval1*mval1)+(mval2*mval2));
}

const double Triangle::Area() const
{
  return (mval1 * mval2)/2;
}


const double Triangle::GetHeight() const
{
  return mval1;
}

const double Triangle::GetWidth() const
{
  return mval2;
}