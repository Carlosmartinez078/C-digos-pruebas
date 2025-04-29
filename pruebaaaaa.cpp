#include <iostream>
using namespace std;

int main() {
    int dd, mm, aa;

    // Solicitar datos al usuario
    cout << "Ingrese el dia (dd): ";
    cin >> dd;
    cout << "Ingrese el mes (mm): ";
    cin >> mm;
    cout << "Ingrese el anio (aaaa): ";
    cin >> aa;

    // Calcular el siguiente día
    dd += 1;
    if (dd > (mm, aa)) {
        dd = 1;
        mm += 1;
        if (mm > 12) {
            mm = 1;
            aa += 1;
        }
    }

    // Mostrar resultado
    cout << "El dia siguiente es: ";
    if (dd < 10) cout << "0";
    cout << dd << "/";
    if (mm < 10) cout << "0";
    cout << mm << "/";
    cout << aa << endl;

    return 0;
}
