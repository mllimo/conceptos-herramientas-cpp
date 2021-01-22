#include <functional>
#include <iostream>
#include <vector>

/*
[ Clausura de captura ] ( argumentos ) -> tipo de retorno {
  <codigo>
}
*/

void ForEach(std::vector<int>& vector, void (*callback)(int&)) {
  for (auto& value : vector) {
    callback(value);
  }
}

void print(int& i) {
  std::cout << i << std::endl;
}

void MultX2(int& i) {
  i *= 2;
}

int main(int argc, char const* argv[]) {
  std::vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 10};

  std::cout << "Vector original: \n";
  ForEach(int_vector, print);

  std::cout << "Vector despues de usar otra callback-lambda:\n";
  ForEach(int_vector, MultX2);
  ForEach(int_vector, print);

  std::cout << "Vector despues de usar otra callback-lambda anonima:\n";
  ForEach(int_vector, [](int& value) {
    value /= 2; 
  });
  ForEach(int_vector, print);

  return 0;
}
