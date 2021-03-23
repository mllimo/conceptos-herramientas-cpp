#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[]) {
  int* puntero_int = new int(2);
  std::cout << "Direccion de memoria:\t\t\t" << puntero_int << std::endl;
  std::cout << "Valor de la direccion de memoria:\t" << *puntero_int << std::endl;
  delete puntero_int;
  return 0;
}
