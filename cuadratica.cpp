#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, operacion;
    
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de C: ";
    cin >> c;

    if (a == 0) {
        cout << "No es una ecuacion cuadratica ingresa otro numero.";
        return 1;
    }

    operacion = b*b - 4*a*c;

    if (operacion > 0) {
        x1 = (-b + sqrt(operacion)) / (2*a);
        x2 = (-b - sqrt(operacion)) / (2*a);
        cout << "Las respuestas son: ";
        cout << "x1 = " << x1;
        cout << "x2 = " << x2;
    }
    else if (operacion == 0) {
        x1 = -b / (2*a);
        cout << "La respuestas es: ";
        cout << "x = " << x1;
    }
    else {
        cout << "La encucación no tiene solucion";
    

    return 0;
    }
}
