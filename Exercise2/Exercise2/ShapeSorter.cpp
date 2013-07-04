#include "stdafx.h"
#include "ShapeSorter.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

ShapeSorter::ShapeSorter()
{
}


ShapeSorter::~ShapeSorter()
{
}
//Print out the Shapes that match a chosen type
void ShapeSorter::TypeMatch(const vector<Shape*> &v, const std::string &type) const
{
  for(vector<Shape*>::const_iterator shapeiter = v.begin(); shapeiter != v.end(); ++shapeiter)
  {
    if ((*shapeiter)->Type() == type)
    {
      PrintShape(**shapeiter);
    }
  }
}

//Print out the Shapes that match a chosen number of sides
void ShapeSorter::SideMatch(const vector<Shape*> &v, int sides) const
{
  for(vector<Shape*>::const_iterator shapeiter = v.begin(); shapeiter != v.end(); ++shapeiter)
  {
    if ((*shapeiter)->Sides() == sides)
    {
      PrintShape(**shapeiter);
    }
  }
}

//Print out the Shapes in order of volume descending
void ShapeSorter::PrintListArea(vector<Shape*> &v) const
{
  std::sort(v.begin(), v.end(), &ShapeSorter::CompareArea);
  int t = 7;
}

//Print out the Shapes in order of perimeter descending
void ShapeSorter::PrintListPerimeter(vector<Shape*> &v) const
{
  std::sort(v.begin(), v.end(), &ShapeSorter::ComparePerim);
  int t = 7;
}

void ShapeSorter::PrintShape(const Shape &s) const
{
    cout << s.Type() << endl;
    cout << s.Sides() << endl;
    cout << s.Perimeter() << endl;
    cout << s.Area() << endl;
}

bool ShapeSorter::ComparePerim(const Shape* first, const Shape* second)
{
  return (first->Perimeter() < second->Perimeter());
}

bool ShapeSorter::CompareArea(const Shape* first, const Shape* second)
{
  return (first->Area() < second->Area());
}
