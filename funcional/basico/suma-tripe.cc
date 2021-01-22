#include <iostream>

// Haz un programa que dado dos números te devuelva la suma de ambos, si estos son iguales, retorna el triple de su suma.

float SumaTriple(float x, float y);

int main(int argc, char const *argv[]) {
  std::cout << (float)SumaTriple(2, 3) << std::endl;
  std::cout << (float)SumaTriple(2, 2) << std::endl;
  std::cout << (float)SumaTriple(9, 10) << std::endl;
  return 0;
}

float SumaTriple(float x, float y) {
  float resultado = x + y;
  if (x == y) {
    return resultado * 3;
  }
  return resultado;
}