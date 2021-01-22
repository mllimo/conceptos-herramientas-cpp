#include <iostream>

float MultiplicarSumando(float x, float y);
float PowSinMultiplicacion(float x, float y);

int main() {
  std::cout << (float)MultiplicarSumando(2, 0) << std::endl;    // 2 * 0
  std::cout << (float)MultiplicarSumando(2, 3) << std::endl;    // 2 * 3
  std::cout << (float)MultiplicarSumando(6, 5) << std::endl;    // 6 * 5
  std::cout << (float)MultiplicarSumando(12, 10) << std::endl;  // 12 * 10

  std::cout << (float)PowSinMultiplicacion(2, 0) << std::endl;    // 2 ^ 0
  std::cout << (float)PowSinMultiplicacion(2, 4) << std::endl;    // 2 ^ 4
  std::cout << (float)PowSinMultiplicacion(3, 5) << std::endl;    // 3 ^ 5
  std::cout << (float)PowSinMultiplicacion(12, 10) << std::endl;  // 12 ^ 10
  return 0;
}

float PowSinMultiplicacion(float x, float y) {
  float resultado_ = x;
  if (y == 0) return 1;
  if (y == 1) return x;
  for (int i = 2; i <= y; i++) {
    resultado_ = (float)MultiplicarSumando(resultado_, x);
  }
  return resultado_; 
}

float MultiplicarSumando(float x, float y) {
  float resultado = x;

  if (y == 1) return x;
  if (y == 0) return 0;
  for (int i = 2; i <= y; i++) {
    resultado += x;
  }
  return resultado;
}
