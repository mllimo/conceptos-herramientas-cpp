#pragma once

#include <iostream>

class Cuadrado {
 public:
  float alto;
  float ancho;

  Cuadrado(float ancho, float alto);

  float Area();
  float Perimetro();
};


/*
  funcional: ¿Qué pasa si quiero calcular ahora el area de un circulo o triangulo?
    float area(float ancho, float alto);
    float perimetro(float ancho, float alto);
  
  Clases:
    Cuadrado mi_cuadrado(alto, ancho);
      mi_cuadrado.Area();
      mi_cuadrado.Perimetro();

    Circulo mi_circulo(radio);
      mi_circulo.Area();
      mi_circulo.Perimetro();

    Triangulo mi_triangulo(lado1, lado2, lado3);
      mi_triangulo.Area();
      mi_triangulo.Perimetro();
 */