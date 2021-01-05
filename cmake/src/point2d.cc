#include "point2d.h"

Point2d::Point2d(float x, float y) {
  this->x = x;
  this->y = y;
}

std::ostream& Point2d::Print(std::ostream& os) {
  os << "X: " << x << " Y: " << y;
  return os;
}