#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    int opcion;

    do{
        cout << "Calculadora Basica" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione la opcion que quieres utilizar: " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << "Suma de dos numeros"<< endl;
            cout << "Primer numero: ";
            cin >> a;
            cout << "Segundo numero: ";
            cin >> b;

            c= a + b;
            cout << "El resultado es: "<< c << endl;
        break;
        case 2:
            cout << "Resta de dos numeros"<< endl;
            cout << "Primer numero: ";
            cin >> a;
            cout << "Segundo numero: ";
            cin >> b;

            c= a - b;
            cout << "El resultado es: "<< c << endl;
        break;
        case 3:
            cout << "Multiplicacion de dos numeros"<< endl;
            cout << "Primer numero: ";
            cin >> a;
            cout << "Segundo numero: ";
            cin >> b;

            c= a * b;
            cout << "El resultado es: "<< c << endl;
        break;
        case 4:
            cout << "Division de dos numeros"<< endl;
            cout << "Primer numero: ";
            cin >> a;
            cout << "Segundo numero: ";
            cin >> b;

            c= a / b;
        cout << "El resultado es: "<< c << endl;
        break;

        default:
            cout << "Adios" << endl;
            break;
        }
    }while (opcion <5);
    
    cin.ignore();
    return 0;
}