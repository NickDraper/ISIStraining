#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double height, double width)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::Perimeter()
{
  return (mval1*2)+(mval2*2);
}

double Rectangle::Area()
{
  return mval1*mval2;
}
