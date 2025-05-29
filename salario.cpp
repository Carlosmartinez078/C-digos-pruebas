#include <iostream>
using namespace std;

int main(){
    float hora, precioHora =1.68 , salario;
    char nombre [20];
    char continuar;

    do{
        cout << "Ingresa tu nombre: ";
        cin >> nombre;
        cout << "Ingresa tus horas de trabajo: ";
        cin >> hora;

        if (hora <=44){
            salario = hora * precioHora;
        } else {
            salario = 44 * precioHora + 1.5 * precioHora * (hora -44);
        }
    
        cout << "Empleado: " << nombre << ". Su salario es: $" << salario << endl; 
        
        cout << "Quiere continuar ingresando datos? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Fin del programa." << endl;

    return 0;
}