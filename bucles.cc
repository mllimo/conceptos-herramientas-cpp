#include <iostream>

/*
  for (<sentencia de inicio>; <sentencia condicional>; <sentencia post ciclo>) {
    <código>
  }

  for (<tipo> <identificador> : <contenedor>) {
    <código>
  }

  while(<condificones>) {
    <código>
  }

  do {
    <código>
  } while(<condiciones>);

*/

int main(int argc, char const *argv[]) {
  // Suma total de número del 0 al 100
  int resultado = 0;
  for (int i = 0; i <= 100; i += 1) {
    resultado += i;
  }
  std::cout << "Resultado: " << resultado << '\n';
  resultado = 0;

  // Problema con bucle while
  int j = 0;
  while (j <= 100) {
    resultado += j;
    ++j;
  }
  std::cout << "Resultado: " << resultado << '\n';
  resultado = 0, j = 0;

  // Problema con do-while
  do {
    resultado += j;
    j++;
  } while (j <= 100);
  std::cout << "Resultado: " << resultado << '\n';

  return 0;
}
