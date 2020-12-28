#include <iostream>

/*
Fundamentales:
  - char                       -> letras
  - unsigned, short, int, long -> números enteros
  - float, double              -> números decimales
  - bool                       -> true, falsse
  - void                       -> NADA

Avanzados:
  - struct
  - class
*/

int main(int argc, char const* argv[]) {
  int entero;
  int entero_valor = 3;
  int entero_igualado = entero_valor;

  std::cout << "entero_igualado: " << entero_igualado << '\n';

  char letra;
  char letra_valor = 'a';
  char letra_igualado = letra_valor;

  std::cout << "letra_igualado: " << letra_igualado << '\n';

  struct Estructura {  // No recomendado
    // Por defecto todo es público
    short corto;
    long largo;
    bool boleano;
    struct Dentro {  // No recomendando
      int dentro;
    };
  };

  class Clase {  // No recomendado
                 // Por defecto todo es privado
   public:
    int numero;
  };

  Estructura contenedor1;
  contenedor1.corto = 10;
  Estructura contenedor2;
  contenedor2.corto = 20;

  std::cout << "contenedor1: " << contenedor1.corto << '\n';
  std::cout << "contenedor2: " << contenedor2.corto << '\n';

  Clase clase1;
  clase1.numero = 12;
  Clase clase2;
  clase2.numero = 24;

  std::cout << "clase1: " << clase1.numero << '\n';
  std::cout << "clase2: " << clase2.numero << '\n';

  // Punteros <tipo>*:
  int* puntero_int;
  char* puntero_char;
  short* puntero_short;

  puntero_int = new int[10];
  puntero_char = new char[100];
  puntero_short = new short(2);

  puntero_int[0] = 1;
  puntero_int[9] = 10;
  puntero_char[0] = 'u';
  puntero_char[1] = 'n';
  puntero_char[2] = 'o';

  std::cout << "char* " << puntero_char << '\n';  // Esto es solo posible con char*
  std::cout << puntero_int[0] << " | " << puntero_int[1] << " | " << puntero_int[9] << '\n';
  std::cout << "Direccion de memoria donde se almacena el short: " << puntero_short << '\n';
  std::cout << "Valor de la direccion de memoria donde se almacena el short: " << *puntero_short << '\n';

  // POR CADA VEZ QUE SE HAGA UN NEW SE HACE DELETE
  delete puntero_short;
  delete[] puntero_char;
  delete[] puntero_int;

  return 0;
}
