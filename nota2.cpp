#include <iostream>
using namespace std;
int main(){
    float nota1,nota2,nota3,promedio;
    cout << "Ingresa una nota: ";
    cin >> nota1;
    cout << "Ingresa otra nota: ";
    cin >> nota2;
    cout << "Ingresa una otra: ";
    cin >> nota3;

    promedio = nota1+nota2+nota3 /3;

    if(promedio <=6){
        cout << "Has reprobado :( " << "El promedio es: " << promedio;

    }else{
        cout << "Has aprobada :) " << "El promedio es:  " << promedio;
    }

    return 0;

    
}