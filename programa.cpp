#include <iostream>
using namespace std;

int main(){
    float nota;
    float nota2;

    cout << "Ingrese una nota ";
    cin >> nota;

    if (nota >90){
        cout << "La nota es una A";
    
    }else if (nota <90 && nota >=85){
        cout << "La nota es una B";
        
    }else if (nota <85 && nota >=80){
        cout << "La nota es una C";

    }else if (nota <80 && nota >=70){
        cout << "La nota es una D";
    
    }else if (nota <70 && nota >=69){
        cout << "La nota es una E";
    
    }else if (nota <69){
        cout << "La nota es una F";
    }else {
        cout << " El numero ingresado no es correcto";
    }
                
    return 0;

}