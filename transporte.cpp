#include <iostream>
using namespace std;

int main(){
    int transporte;

    cout << "Elija un medio de transporte" << endl;
    cout << "1. Bus" << endl;
    cout << "2. Metro" << endl;
    cout << "3. Taxi" << endl;
    cin >> transporte;

    switch (transporte){
    case 1:
        cout << "El costo del autobus es de $0.25 ctvs. ";
        break;
    
    case 2:
        cout << "El costo del metro varia dependiendo la distancia. Precio inicial de $3.00";
        break;

    case 3:
        cout << "El costo del taxi varia dependiendo la distancia. Precio inicial de $2.00";
        break;
    
    default:
        break;
    }


    return 0;
}