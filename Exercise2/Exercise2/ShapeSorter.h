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
  void TypeMatch(const std::vector<Shape*> &v, const std::string &type) const;
//Print out the Shapes that match a chosen number of sides
  void SideMatch(const std::vector<Shape*> &v, int sides) const;
//Print out the Shapes in order of volume descending
  void PrintListArea(std::vector<Shape*> &v) const;
//Print out the Shapes in order of perimeter descending
  void PrintListPerimeter(std::vector<Shape*> &v) const;
  void PrintShape(const Shape &s) const;
private:
  static bool ComparePerim(const Shape* first, const Shape* second);
  static bool CompareArea(const Shape* first, const Shape* second);
};

#endif