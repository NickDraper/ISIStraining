// Exercise2.cpp : Defines the entry point for the console application.
//

#include "Circle.h"
#include "Rectangle.h"
#include "stdafx.h"
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"
#include "ShapeSorter.h"
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
  ShapeSorter util = ShapeSorter();
  std::vector<Shape*> shapescollection;
  shapescollection.push_back(new Square());
  shapescollection.push_back(new Triangle());
  shapescollection.push_back(new Circle());
  shapescollection.push_back(new Rectangle());
  
  util.PrintShape(*shapescollection[0]);
  //util.PrintListArea(shapescollection);
 // util.PrintListPerimeter(shapescollection);
  
  return 0;
}
