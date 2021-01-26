#pragma once

#include <iostream>
#include <vector>

class String {
 public:
  String(const char* cadena);
  String();
  ~String();

  char At(int indice);
  String Igualar(String& string);

  std::vector<char> GetVector();
  int GetTamanio();

  private:
    std::vector<char> concatenacion_caracteres_;
    int tamanio;

};