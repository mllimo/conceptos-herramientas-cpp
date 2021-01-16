#include "cuadrado.h"

Cuadrado::Cuadrado(float ancho, float alto) {
  this->ancho = ancho;
  this->alto = alto;
}

float Cuadrado::Area() {
  return alto * ancho;
}

float Cuadrado::Perimetro() {
  return alto * 2 + ancho * 2;
}