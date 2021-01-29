#include <iostream>
#include <vector>
/*
+
-
*
/
<<
>>
%
*/

class Pepe {
 public:
  int x = 10;
  int y = 10;
  // Operador = | siempre tiene que estar definido.
  Pepe operator=(const Pepe& otro_pepe) {
    x = otro_pepe.x;
    y = otro_pepe.y;
    return *this;  // me devuelvo a mi mismo
  }

  Pepe operator=(const std::vector<int>& vector) {
    x = vector[0];
    y = vector[1];
    return *this;  // me devuelvo a mi mismo
  }
};

std::ostream& operator<<(std::ostream& os, const Pepe& objeto) {
  os << objeto.x << " | " << objeto.y << std::endl;
  return os;
}

// operador mostrar por pantalla con vectores de enteros std::vector<int>
std::ostream& operator<<(std::ostream& os, const std::vector<int>& cualquier_vector) {
  for (int i = 0; i < cualquier_vector.size(); i++) {
    os << cualquier_vector[i] << ",\t";
  }
  return os;
}

// Sobrecarga de operador para el operador "+" y que sume los contenidos de dos vectores
std::vector<int> operator+(const std::vector<int>& cacahuete, const std::vector<int>& almendra) {
  std::vector<int> resultado;  // Como no tenemos nada insertado tiene este vector valor 0.
  for (int i = 0; i < cacahuete.size(); i++) {
    resultado.push_back(cacahuete[i] + almendra[i]);
  }
  return resultado;
}

int main(int argc, char const* argv[]) {
  std::cout << "HOLA";           // lo llamamos de fomra implicita.(siempre utilizamos esta)
  std::cout.operator<<("hola");  // de forma exlicita.
  Pepe pepe;
  std::cout << pepe << std::endl;

  // Ejercicio
  std::vector<int> mi_vector = {2, 3, 4};
  std::cout << mi_vector << std::endl;

  // Ejercicio 2
  std::vector<int> resultado = mi_vector + mi_vector;
  std::cout << resultado << std::endl;
  return 0;
}
