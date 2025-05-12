#include <iostream>
using namespace std;

int main(){
    int velocidad;

    cout << "Ingrese una velocidad ";
    cin >> velocidad;

    if (velocidad >60 && velocidad <80){
        cout << "Usted es acrededor de una multa de $100";
    } else if (velocidad >80){
        cout << "Usted es acrededor de una multa de $150";
    } else {
        cout << "Usted es un buen conductor";
    }

    return 0;
}