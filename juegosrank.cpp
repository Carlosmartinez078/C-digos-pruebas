#include <iostream>
using namespace std;
int main(){
    int rank;

    cout << "Ingrese una calificacion del juego del 1 al 5 ";
    cin >> rank;

    switch (rank){
    case 1:
        cout << "El juego es malisimo";
        break;
    case 2:
        cout << "El juego es muy meh";
        break;

    case 3:
        cout << "El juego es MID";
        break;

    case 4:
        cout << "Podria mejorar mi bro";
        break;
    
    case 5:
        cout << "El juego es GOD";
        break;

    default:
        cout << "No esta en el rango de 1-5";
        break;
    }


    return 0;
}