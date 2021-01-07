#include "point2d.h"
#include "cuadrado.h"

void EjemploCuadrado();
void EjemploPunto();

int main(int argc, char const *argv[]) {
  EjemploCuadrado();
  EjemploPunto();
  return 0;
}

void EjemploCuadrado() {
  Cuadrado mi_cuadrado(10, 10);
  std::cout << "Area del cuadrado: " << mi_cuadrado.Area() << std::endl;
  std::cout << "Perímetro del cuadrado: " << mi_cuadrado.Perimetro() << std::endl;
}

void EjemploPunto() {
  Point2d point = {20, 10};
  Point2d second_point(30, 40);

  std::cout << "Suma de: ";
  point.Print(std::cout) << " | ";
  second_point.Print(std::cout) << std::endl;
  (point + second_point).Print(std::cout);
  std::cout << std::endl;
}
