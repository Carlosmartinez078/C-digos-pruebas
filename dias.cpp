#include <iostream>
using namespace std;

int main(){
    int dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;
    
    switch (dia){
    case 0:
        cout << dia << " Es dia lunes";
        break;
    case 1:
        cout << dia << " Es dia martes";
        break;
    
    case 2:
        cout << dia << " Es dia miercoles";
        break;
    case 3:
        cout << dia << " Es dia miercoles";
        break;
    
    case 4:
        cout << dia << " Es dia jueves";
        break;
    
    case 5:
        cout << dia << " Es dia viernes";
        break;
    
    case 6:
        cout << dia << " Es dia sabado";
        break;
    case 7:
        cout << dia << " Es dia domingo";
        break;
    
    default:
        cout << "no se encuentra en el rango de datos del 1 al 7";
        

    return 0;
    }
}