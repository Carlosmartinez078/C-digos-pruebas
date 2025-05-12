#include <iostream>
using namespace std;

int main(){
    float compra;
    int compraTotal, descuento;

    cout << "Ingrese el monto de la compra ";
    cin >> compra;

    if (compra >100){
        compraTotal = compra * 0.10;
        descuento = compraTotal - compra;


        cout << "El monto de su compra cuenta con 10 de descuento " << descuento;
        


    }else{
        cout << "El valor de su compra es " << compra;
    }

    return 0;
}