#include <iostream>
using namespace std;

int main(){

    float nota;
    char letra;

    cout << "ingrese una nota";
    cin >> nota;

    if (nota >= 90) letra = 'A';
    else if (nota <90 && nota >=85) letra = 'B';
    else if (nota <85 && nota >=80) letra = 'C';
    else if (nota <80 && nota >=70) letra = 'D';
    else if (nota <70 && nota >=69) letra = 'E';
    else if (nota <69) letra = 'F';

    switch (letra){
    case 'A':
        cout << "La nota es una A";
    break;
    
    case 'B':
        cout << "La nota es una B";
    break;

    case 'C':
        cout << "La nota es una C";
    break;

    case 'D':
        cout << "La nota es una D";
    break;
    
    case 'E':
        cout << "La nota es una E";
    break;

    case 'F':
        cout << "La nota es una F";
    break;
    
    default:
        cout << "no esta entre la notas";    
    break;
    }


    return 0;

}