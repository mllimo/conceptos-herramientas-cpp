#include "point2d.h"

Point2d::Point2d(float x, float y) {
  this->x = x;
  this->y = y;
}

Point2d::Point2d() {
  x = 0;
  y = 0;
}

Point2d::~Point2d() {
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
  result.x = point_a.x / point_b.x;
  result.y = point_a.y / point_b.y;
  return result;
}

// A / numero -> Punto(x / numero, y / numero)
Point2d operator/(const Point2d& point_a, float numero) {
  float x = point_a.x / numero;
  float y = point_a.y / numero;
  Point2d result(x, y);
  return result;
}

Point2d operator/(const Point2d& point_a, const Point2d& point_b) {
  float x = point_a.x / point_b.x;
  float y = point_a.y / point_b.y;
  Point2d result(x, y);
  return result;
}

std::ostream& operator<<(std::ostream& os, const Point2d& point_b) {
  os << point_b.x << " | " << point_b.y << " | " << std::endl;
  return os;
}