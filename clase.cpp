#include <iostream>
using namespace std;
int main(){
    int numero, sumaTotal=0, residuo;
    cout << "Ingrese un numero entero y que no sea 1: ";
    cin >> numero;

    //los numeros deben estar entre 2 y 100

    if(numero<2){
    
    cout << "El numero no es valido";
    
    }
    else{
        if(numero >= 2 && numero <= 100){
            residuo = numero % 2;
            if(residuo==0){
                sumaTotal = numero + sumaTotal;
                cout <<"la suma es: " << sumaTotal;
            }else{
                    cout << "El numero es impar";
                }

            } 

        }
    
    
    return 0;
}