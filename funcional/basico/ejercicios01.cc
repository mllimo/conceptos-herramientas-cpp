#include <iostream>
#include <string>

// Decir si un string contiene a todas las vocales del abecedario
bool ContieneTodasLasVocales(std::string vocales);

int main() {
  std::string cadena("kasaedlkjabsdlkiojabsdaeiou");
  std::string cadena2("a");
  std::cout << (ContieneTodasLasVocales(cadena) ? "Si" : "No") << std::endl;
  std::cout << (ContieneTodasLasVocales(cadena2) ? "Si" : "No") << std::endl;
  return 0;
}

bool ContieneTodasLasVocales(std::string cadena) {
  std::string vocales = "aeiou";
  for (int i = 0; i < vocales.size(); i++) {
    for (int j = 0; j < cadena.size(); j++) {
      if (vocales[i] == cadena[j]) {
        break;                                      //frena un bucle y sale de el
      }
      if (j == cadena.size() - 1) {
        return false;
      }
    }
  }
  return true;
}
