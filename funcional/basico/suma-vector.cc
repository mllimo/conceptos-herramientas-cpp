#include <iostream>
#include <vector>

// Haz un programa que dado diez [vectores](https://es.cppreference.com/w/cpp/container/vector) de números le diga al usuario la suma de los elementos de cada uno de ellos.

int SumaVectores(std::vector<int> vector);


int main() {
  // 10 contenedores
  std::vector<int> contenedor0 = {2, 2, 4, 5};
  std::vector<int> contenedor1 = {2, 3, 4, 5};
  std::vector<int> contenedor2 = {2, 3, 4, 5};
  std::vector<int> contenedor3 = {1, 3, 5, 6};
  std::vector<int> contenedor4 = {2, 3, 4, 5};
  std::vector<int> contenedor5 = {2, 3, 4, 12};
  std::vector<int> contenedor6 = {221, 3, 4123, 5};
  std::vector<int> contenedor7 = {2, 3, 4, 5};
  std::vector<int> numeros8 = {2, 312, 4, 5, 1, 7, 8, 6, 4, 3};
  std::vector<int> vector9 = {2123, 3, 4, 5, 123, 34, 34, 2, 1, 2, 3, 5, 76, 7};


  std::cout << "la suma es : " << SumaVectores(contenedor0) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor1) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor2) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor3) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor4) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor5) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor6) << std::endl;
  std::cout << "la suma es : " << SumaVectores(contenedor7) << std::endl;
  std::cout << "la suma es : " << SumaVectores(numeros8) << std::endl;
  std::cout << "la suma es : " << SumaVectores(vector9) << std::endl;

  return 0;
}

int SumaVectores(std::vector<int> vector){
  int resultado = 0;
  for (int i=0; i < vector.size(); i++){
    resultado += vector.at(i);
  }
  return resultado;
}


 // std::cout << contenedor[0] << std::endl;
  // std::cout << contenedor[1] << std::endl;
  // std::cout << contenedor[2] << std::endl;
  // std::cout << contenedor[3] << std::endl;

  // for (int i = 0; i < contenedor.size(); i++)
  //   std::cout << contenedor.at(i) << std::endl;

  // contenedor.push_back(23);
  // contenedor.resize(10);
