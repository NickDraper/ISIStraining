#include "stdafx.h"
#include "Square.h"
#include <iostream>

Square::Square(): Shape("Square", 1, 1, 4)
{

}

Square::Square(double side): Shape("Square", side, side, 4)
{

}

Square::~Square()
{

}

const double Square::Perimeter() const
{
  return 4*mval1;
}

const double Square::Area() const
{
  return mval1*mval1;
}

const double Square::GetSide() const
{
  return mval1;
}