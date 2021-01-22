#include <iostream>
#include <vector>

int main() {
  std::vector<int> contenedor = {2, 3, 4, 5};
  std::cout << contenedor[0] << std::endl;
  std::cout << contenedor[1] << std::endl;
  std::cout << contenedor[2] << std::endl;
  std::cout << contenedor[3] << std::endl;


  for (int i = 0; i < contenedor.size(); i++)
      std::cout << contenedor.at(i) << std::endl;

  contenedor.push_back(23);
  contenedor.resize(10);
  return 0;
}
