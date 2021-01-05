#include "point2d.h"

int main(int argc, char const *argv[]) {
  Point2d point = {20, 10};
  Point2d second_point(30, 40);

  std::cout << "Suma de: ";
  point.Print(std::cout) << " | "; second_point.Print(std::cout) << std::endl;
  (point + second_point).Print(std::cout);
  std::cout << std::endl;
  return 0;
}
