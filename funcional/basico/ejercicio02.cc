#include <iostream>
#include <string>

// Invertir un string
std::string CadenaInversa(std::string cadena);

int main() {
  std::string cadena_string("perro");
  std::cout << CadenaInversa(cadena_string) << std::endl;  // aloh
  return 0;
}

std::string CadenaInversa(std::string cadena) {
  std::string resultado = "";
  for (int i = cadena.size() - 1; i >= 0; --i) {
    resultado += cadena[i];
  }
  return resultado;
}
