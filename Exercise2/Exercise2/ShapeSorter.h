#ifndef DEF_ShapeSorter_h
#define DEF_ShapeSorter_h

#include <string>
#include "Shape.h"
#include <vector>

class ShapeSorter
{
public:
  ShapeSorter();
  ~ShapeSorter();
//Print out the Shapes that match a chosen type
  void TypeMatch(std::vector<Shape>, std::string type);
//Print out the Shapes that match a chosen number of sides
  void SideMatch(std::vector<Shape>, int sides);
//Print out the Shapes in order of volume descending
  void PrintArea(std::vector<Shape>);
//Print out the Shapes in order of perimeter descending
  void PrintPerimeter(std::vector<Shape>);
};

#endif