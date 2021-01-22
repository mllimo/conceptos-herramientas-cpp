#include <iostream>

float Pow(float x, float y);

int main(int argc, char const *argv[]) {
  std::cout << (float)Pow(2, 0) << std::endl;
  std::cout << (float)Pow(2, 3) << std::endl;
  std::cout << (float)Pow(2, 2) << std::endl;
  std::cout << (float)Pow(9, 10) << std::endl;
  return 0;
}

float Pow(float x, float y) {
  float resultado = x;

  if (y == 0) 
    return 1;

  for (int i = 2; i <= y; i++) {
    resultado *= x;
  }
  return resultado;
}
