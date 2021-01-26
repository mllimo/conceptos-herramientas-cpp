#include "cuadrado.h"

Cuadrado::Cuadrado(float ancho, float alto) {
  this->ancho = ancho;
  this->alto = alto;
}

Cuadrado::Cuadrado() {
  ancho = 0;
  alto = 0;
}

float Cuadrado::Area() {
  return alto * ancho;
}

float Cuadrado::Perimetro() {
  return alto * 2 + ancho * 2;
}