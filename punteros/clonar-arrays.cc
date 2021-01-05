#include <iostream>

#define TAM 6

void Mostrar(int* array) {
  for (int i = 0; i < TAM; i++)
    std::cout << array[i] << std::endl;
}

void Mult(int* array) {
  for (int i = 0; i < TAM; i++)
    array[i] *= 2;
}

int* Copy(int* array, int size) {
  int* copy = new int[size]; // [] -> espacio del original ; [] -> espacio de la copia
  for (int i = 0; i < size; i++)
    copy[i] = array[i];
  return copy;
}

int main(int argc, char const* argv[]) {
  int array[] = {1, 2, 3, 4, 5, 6};
  int* copy = Copy(array, TAM);
  Mult(copy);
  Mostrar(array);
  return 0;
}
