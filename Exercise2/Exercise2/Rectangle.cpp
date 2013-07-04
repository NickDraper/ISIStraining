#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(): Shape("Rectangle", 1, 2, 4)
{

}

Rectangle::Rectangle(double height, double width): Shape("Rectangle", height, width, 4)
{

}

Rectangle::~Rectangle()
{

}

const double Rectangle::Perimeter() const
{
  return (mval1*2)+(mval2*2);
}

const double Rectangle::Area() const
{
  return mval1*mval2;
}

const double Rectangle::GetHeight() const
{
  return mval1;
}

const double Rectangle::GetWidth() const
{
  return mval2;
}
