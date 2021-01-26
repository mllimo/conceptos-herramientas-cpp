#include <iostream>
// Crea un programa que dado diez [arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm) de números le diga al usuario cual es el mayor de cada uno de ellos.

#define TAMANIO 4

int ComparadorMayor(int array[TAMANIO]);  // o int ComparadorMayor(int* array);

int main() {
  // 10 arrays
  int contenedor0[] = {2, 2, 4, 5};
  int contenedor1[] = {-2, 3, 423, 5};
  int contenedor2[] = {2, 35, 4, 5};
  int contenedor3[] = {1, 3, 5, 6};
  int contenedor4[] = {2, -1233, 4, 5};
  int contenedor5[] = {2, 2, 4, 15};
  int contenedor6[] = {562, 2, 4, 5};
  int contenedor7[] = {2, 62, 4, 5};
  int contenedor8[] = {2, 2, 64, 5};
  int contenedor9[] = {2, 452, 4, 565};

  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor0) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor1) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor2) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor3) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor4) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor5) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor6) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor7) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor8) << std::endl;
  std::cout << "el mayor número es : " << (int)ComparadorMayor(contenedor9) << std::endl;
  return 0;
}

int ComparadorMayor(int array[TAMANIO]) {
  int comparadorbase = -40000;
  for (int i = 0; i < TAMANIO; i++) {
    if (array[i] >= comparadorbase) {
      comparadorbase = array[i];
    }
  }
  return comparadorbase;
}