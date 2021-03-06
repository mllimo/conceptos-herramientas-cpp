#ifndef POINT2D_H_
#define POINT2D_H_

#include <iostream>

class Point2d {
 public:
  Point2d(float x, float y);
  Point2d();
  ~Point2d();

  std::ostream& Print(std::ostream& os);

  Point2d operator=(const Point2d& point);
  friend Point2d operator+(const Point2d& point_a, const Point2d& point_b);
  friend Point2d operator/(const Point2d& point_a, const Point2d& point_b);
  friend Point2d operator/(const Point2d& point_a, float numero);
  friend std::ostream& operator<<(std::ostream& os, const Point2d& point_b);

 private:
  float x;
  float y;
};

#endif