#include <iostream>

/*
Funciones:
  <tipo de retorno> <identificador>(<argumentos>) {
    <código>
  }
*/

void DiceSoloHola() {
  std::cout << "Hola\n";
}

void DiceHolaAlguien(const char* nombre) {
  std::cout << "Hola " << nombre << '\n';
}

bool LoContrario(bool boleano) {
  return !boleano;
}

// <tipo de dato>& -> ALIAS
void SumoUno(int& valor_referencia) {
  ++valor_referencia;
}

// Si, el main es una función
int main(int argc, char const *argv[]) {
  
  bool boleano = true;
  int valor = 0;
  
  DiceSoloHola();
  DiceHolaAlguien("Antonio");
  
  std::cout << boleano << " su contrario es " << LoContrario(boleano) << '\n';

  std::cout << "Valor de la variable antes de la función " << valor << '\n';
  SumoUno(valor);
  std::cout << "Valor de la variable después de la función " << valor << '\n';

  return 0;
}
