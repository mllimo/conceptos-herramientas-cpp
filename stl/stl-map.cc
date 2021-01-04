#include <iostream>
#include <map>
#include <string>

void Mostrar(const std::map<int, std::string>& mapa) {
  for (const auto& par : mapa) {
    std::cout << "Clave: " << par.first << "\tValor: " << par.second << std::endl;
  }
}

int main(int argc, char const* argv[]) {
  std::map<int, std::string> int_string;

  int_string.insert(std::make_pair(0, "1"));
  int_string.insert(std::make_pair(1, "2"));
  int_string.insert(std::make_pair(2, "3"));
  int_string.insert(std::make_pair(3, "4"));
  int_string.insert(std::make_pair(1000, "5"));

  Mostrar(int_string);
  std::cout << "-----------------------------" << std::endl;

  std::map<int, std::string>::iterator it = int_string.find(0);
  std::cout << "Clave: " << it->first << "\tValor: " << it->second << std::endl;

  std::cout << "-----------------------------" << std::endl;

  it = int_string.find(123);  // No existe dentro de las claves
  if (it == int_string.end())
    std::cout << "Clave no encontrada\n";

  std::cout << "-----------------------------" << std::endl;

  it = int_string.find(1000);
  it->second = "Cambiando el valor";
  Mostrar(int_string);

  std::cout << "-----------------------------" << std::endl;

  int_string.erase(it);
  Mostrar(int_string);

  return 0;
}
