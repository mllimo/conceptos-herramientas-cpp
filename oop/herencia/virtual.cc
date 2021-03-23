#include <cstring>
#include <iostream>
using namespace std;

// Obliga a las clases hijas a tener su propia implementación
class PadreInterfaz {
 public:
  virtual void Saludar() = 0;
};

class HijoImplementacion : public PadreInterfaz {
 public:
  void Saludar() {
    cout << "Saluda hijo\n";
  }
};

// Las clases hijas no están obligadas a implementar las funciones virtuales del padre
// Si se genera un puntero del tipo padre y se crea una instacia hija al llamar a una función virtual
// Llamará a la función de la hija

class Padre {
 public:
  virtual void Saludar() {
    cout << "Saluda padre\n";
  }
};


class Hijo : public Padre {
 public:
  void Saludar() {
    cout << "Saluda hijo\n";
  }
};

int main() {
  Hijo ap2;
  ap2.Saludar();
  ((Padre)ap2).Saludar();

  // Polimorfismo
  Padre* ap = new Padre();
  ap->Saludar();
  ap = new Hijo();
  ap->Saludar();
  return 0;
}

