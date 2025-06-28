#include <iostream>
#include <string>

using namespace std;

//crear el struct

struct Persona {
int id;
string nombre;
int edad;
float altura;

// crear metodos del struct para llevar al main

void ingresarDatos() {
    cout << "Ingresa tu ID \n";
    cin >> id;
    cout << "Ingresa tu nombre \n";
    cin >> nombre;
    cout << "Ingresa tu edad \n";
    cin >> edad;
    cout << "Ingresa tu altura \n";
    cin >> altura;
    }
void showData(){
    cout << "Tu ID es \n" << id << endl;
    cout << "Tu nombre es \n" << nombre << endl;
    cout << "Tu edad es \n" << edad << endl;
    cout << "Tu altura es \n" << altura << endl;
    }
};

int main(){

    Persona p1; // crear variable para llamar del metodo

    p1.ingresarDatos();
    
    cout << "/////////////////////////////////////////" << endl;
    
    p1.showData();

    
    return 0;

}



