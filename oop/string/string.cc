#include "string.h"

String::String(const char* cadena) {
  int i = 0;
  char caracter;
  while (true) {
    caracter = cadena[i];
    if (caracter == '\0') break;
    concatenacion_caracteres_.push_back(caracter);
    i++;
  }
  tamanio = concatenacion_caracteres_.size();
}

String::~String() {
  
}

String::String() {
  tamanio = concatenacion_caracteres_.size();
}

char String::At(int indice) {
  return concatenacion_caracteres_[indice];
}

std::vector<char> String::GetVector() {
  return concatenacion_caracteres_;
}

int String::GetTamanio() {
  return tamanio;
}

String String::Igualar(String& string) {
  concatenacion_caracteres_ = string.GetVector();
  tamanio = string.GetTamanio();
}