#pragma once

#include <iostream>

class Point2d {
  public:
    Point2d(float x, float y);

    std::ostream& Print(std::ostream& os);

  public:
    float x;
    float y;
};