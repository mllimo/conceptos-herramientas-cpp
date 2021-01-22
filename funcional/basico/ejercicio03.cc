#include <iostream>
#include <string>

// - Escribir un programa que muestre en pantalla los números del 1 al 100, si es par por la palabra “fizz”, si es impar por “buzz"
// - Una funcion que te diga si un numero es par
// - Una funcion que te diga si un numero es impar

bool FuncionPar(int numero_par);
bool FuncionImpar(int numero_impar);

int main() {
  for (int i = 1; i <= 100; i++) {
    if (FuncionPar(i)) {
      std::cout << "fizz" << std::endl;
    }
    if (FuncionImpar(i)) {
      std::cout << "buzz" << std::endl;
    }
  }

  return 0;
}
bool FuncionPar(int numero_par) {
  if (numero_par % 2 == 0) {
    return true;
  }
  return false;
}
bool FuncionImpar(int numero_impar) {
  if (numero_impar % 2 == 1) {
    return true;
  }
  return false;
}
