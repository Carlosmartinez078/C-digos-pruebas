#include <iostream>

using namespace std;

int main(){
    float base;
    float altura;
    float area;

    cout << "Ingresa la base del triangulo: ";
    cin >> base;

    cout << "Ingresa la altura del triangulo: ";
    cin >> altura;

    area = (base*altura)/2;

    cout << "El area del triangulo es: ";
    cout << area <<endl;

    return 0;
}