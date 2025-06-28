#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Producto { 
    int codigo; 
    string nombre; 
    float precio;
};
    Producto productos[5];
    int total = 0;

    void agregar() { 
    
    cout << "Codigo: "; 
    cin >> productos[total].codigo; 
    cout << "Nombre: "; 
    cin >> productos[total].nombre; 
    cout << "Precio: "; cin >> productos[total].precio; 
    total++; cout << "Agregado!\n";
}

void mostrar() { 
    for(int i = 0; i < total; i++){ 
        cout << productos[i].codigo << " - " 
        << productos[i].nombre << " - $" 
        << productos[i].precio << endl; 
        }
    }

int main(){

    agregar();

    cout << "/////////////////////////////////////////////////////////////" << endl;

    mostrar();
    

    return 0;

}