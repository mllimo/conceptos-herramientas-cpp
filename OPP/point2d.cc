#include "point2d.h"

Point2d::Point2d(float x, float y) {
  this->x = x;
  this->y = y;
}

std::ostream& Point2d::Print(std::ostream& os) {
  os << "X: " << x << " Y: " << y;
  return os;
}

Point2d Point2d::operator=(const Point2d& point) {
  x = point.x;
  y = point.y;
  return *this;
}

Point2d operator+(const Point2d& point_a, const Point2d& point_b) {
  Point2d result(0, 0);
  result.x = point_a.x + point_b.x;
  result.y = point_a.y + point_b.y;
  return result;
}
