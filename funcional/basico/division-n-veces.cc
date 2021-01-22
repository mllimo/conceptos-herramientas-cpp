#include <iostream>

// Funcion(numero, N) -> dividir numero N veces -> numero/numero/numero/numero
float DividirNVeces(float x, float y);

int main(int argc, char const *argv[]) {
  std::cout << (float)DividirNVeces(2, 1) << std::endl;
  std::cout << (float)DividirNVeces(2, 3) << std::endl;
  std::cout << (float)DividirNVeces(2, 2) << std::endl;
  std::cout << (float)DividirNVeces(9, 10) << std::endl;
  return 0;
}



float DividirNVeces(float x, float y) {
  float resultado = x;

  for (int i = 1; i <= y; i++) {
    resultado /= x;
  }
  return resultado; 
}
