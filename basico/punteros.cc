#include <iostream>

int main(int argc, char const *argv[]) {
  int* puntero_int = NULL;
  int diez = 10;
  std::cout << "Celda de memoria del puntero: " << &puntero_int << std::endl;
  std::cout << "Direccion de memoria que almacena el puntero: " << puntero_int << std::endl;
  
  // std::cout << "Valor que almacena el puntero: " << *puntero_int << std::endl; // Violacion de segmento
  puntero_int = new int(2);
  std::cout << "Valor que almacena el puntero: " << *puntero_int << std::endl;
  delete puntero_int;
  puntero_int = &diez;
  std::cout << "Valor que almacena el puntero: " << *puntero_int << std::endl;
  puntero_int = NULL; // No hace falta delete si no se hace new

  puntero_int = new int[13];
  delete [] puntero_int;

  return 0;
}