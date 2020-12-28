#include <iostream>

/*
  if (<condiciones>) {
    <código>
  }

  if (<condiciones>) {
    <código>
  } else if (<condiciones>) {
    <código>
  } else {
    <código>
  }

  switch (valor) {
  case <valor>:
      <código>
    break;
  default:
    break;
  }

  <condición ? <código si se cumple> : <código si no se cumple>
  
*/

int main(int argc, char const *argv[]) {
  int uno = 1;
  int dos = 2;

  if (true)
    std::cout << "Es verdad\n";

  std::cout << "-----------------------------\n";

  if (false)
    std::cout << "No se va a mostrar este mensaje\n";

  std::cout << "-----------------------------\n";

  if (uno != dos && uno == uno) {
    std::cout << "Uno es distinto de dos y uno es igual a uno\n";
  }

  std::cout << "-----------------------------\n";

  if (uno == dos && uno == uno) {
    std::cout << "Uno es igual a uno y uno es igual a uno\n";
  } else {
    std::cout << "No es verdad la condión\n";
  }

  std::cout << "-----------------------------\n";

  if (false)
    std::cout << "nunca podremos entrar\n";
  else if (uno != uno)
    std::cout << "Tampoco vamos a entrar\n";
  else
    std::cout << "Como ningún condicional se cumple, entro aquí\n";

  std::cout << "-----------------------------\n";

  switch (uno) {
    case 1:
      std::cout << "Switch: Es uno\n";
      break;

    default:
      std::cout << "Switch: Ninguna de las opciones anteriores\n";
      break;
  }

  std::cout << "2 + 2 = 5?: " << (2 + 2 == 5 ? "Si, es 5" : "No, es 4") << '\n';

  return 0;
}
