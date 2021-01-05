#include "point2d.h"

int main(int argc, char const *argv[]) {
  Point2d point = {20, 10};
  point.Print(std::cout);
  std::cout << std::endl;
  return 0;
}
