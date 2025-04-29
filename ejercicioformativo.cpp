#include <iostream>
using namespace std;
int main(){
    int dia, mes, año;

    cout << "Ingrese un dia";
    cin >> dia;
    cout << "Ingrese un mes";
    cin >> mes;
    cout << "Ingrese un año";
    cin >> año;
    
    if (dia > (mes, año)) {
        dia = 1;
        mes = 1;
        if (mes > 12) {
            mes = 1;
            año += 1;
        }

    cout << "El dia siguiente es: ";
    if (dia < 10) cout << "0";
    cout << dia << "/";
    if (mes < 10) cout << "0";
    cout << mes << "/";
    cout << año << endl;

        

    

    return 0;


    }
}