#pragma once

#include <iostream>

class Cuadrado {
 public:
  float alto;
  float ancho;

  Cuadrado(float ancho, float alto);
  Cuadrado();

  float Area();
  float Perimetro();
};

// Cuadrado cuad1; // -> A
// Cuadrado cuad2; // -> B
// Cuadrado cuad3; // -> C
// Cuadrado cuad4; // -> D


/*
  funcional: ¿Qué pasa si quiero calcular ahora el area de un circulo o triangulo?
    int ancho, int alto;
    float area(float ancho, float alto);
    float perimetro(float ancho, float alto);
  
  Clases:
    Cuadrado mi_cuadrado(alto, ancho);
      mi_cuadrado.Area();
      mi_cuadrado.Perimetro();

    Circulo mi_circulo(radio);
      mi_circulo.Area();
      mi_circulo.Perimetro();

    Triangulo mi_triangulo(lado1, lado2, lado3); -> Inicializacion
      mi_triangulo.Area();
      mi_triangulo.Perimetro();
 */