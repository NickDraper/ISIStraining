#include "stdafx.h"
#include "Square.h"


Square::Square()
{
}

Square::Square(double side)
{
}

Square::~Square()
{
}

double Square::Perimeter()
{
  return 4*mval1;
}

double Square::Area()
{
  return mval1*mval1;
}
