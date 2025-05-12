#include <iostream>
using namespace std;

int main() {
  int numero;

  do {
    cout << "Introduce un número (0 para salir): ";
    cin >> numero;

    if (numero == 0) {
      cout << "El número introducido es: " << numero;
    }
  } while (numero == 0);

  cout << "Programa terminado.";

  return 0;
}