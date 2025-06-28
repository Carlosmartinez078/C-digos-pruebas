#include <iostream>
using namespace std;

int main() {
    float calificaciones[5];
    float suma = 0;

    // < y no <=
    for(int i = 0; i < 5; i++) {
        cout << "Ingresa la calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    // Calcular el promedio
    float promedio = suma / 5;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
