#include <iostream>

template<typename T>
class Punto2D {
 public:
  Punto2D(T x_, T y_) {
    x = x_;
    y = y_;
  }

  void Mostrar() {
    std::cout << "x: " << x << " y: " << y;
  }

  T x;
  T y;
};

template<typename T>
class Punto3D : public Punto2D<T> {
 public:
  Punto3D(T x_, T y_, T z_) : Punto2D(x_, y_) {
    z = z_;
  }

  void Mostrar() {
    Punto2D::Mostrar();
    std::cout << " z: " << z;
  }

  T z;
};

int main(int argc, char const *argv[]) {
  Punto2D<int> punto2d(10, 20);
  punto2d.Mostrar();
  std::cout << '\n';

  Punto3D<float> punto3d(30, 40, 50);
  punto3d.Mostrar();
  std::cout << '\n';

  return 0;
}