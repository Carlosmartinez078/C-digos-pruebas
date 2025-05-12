#include <iostream>
using namespace std;
int main(){
    int numeroA, numeroB;

    cout << "Ingrese un numero cualquiera ";
    cin >> numeroA;

    cout << "Ingrese un numero cualquiera ";
    cin >> numeroB;

    if (numeroA >=80 && numeroA <=100){
        cout << "El " << numeroA << " esta mas cerca del 100";
    } else if (numeroB >=80 && numeroB <=100){
        cout << "El " << numeroB << " esta mas cerca del 100";
    } else {
        cout << "los numeros no esta en el rango de 0-100";
    }

    return 0;
}