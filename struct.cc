#include <iostream>

struct Punto2D {
  Punto2D(int x_, int y_) {
    x = x_;
    y = y_;
  }

  void Mostrar() {
    std::cout << "x: " << x << " y: " << y;
  }

  int x;
  int y;
};

struct Punto3D : public Punto2D {
  Punto3D(int x_, int y_, int z_) : Punto2D(x_, y_) {
    z = z_;
  }

  void Mostrar() {
    Punto2D::Mostrar();
    std::cout << " z: " << z;
  }

  int z;
};

int main(int argc, char const *argv[]) {
  Punto2D punto2d(10, 20);
  punto2d.Mostrar();
  std::cout << '\n';

  Punto3D punto3d(30, 40, 50);
  punto3d.Mostrar();
  std::cout << '\n';

  return 0;
}
