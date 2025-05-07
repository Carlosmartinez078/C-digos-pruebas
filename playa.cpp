#include <iostream>
using namespace std;

int main(){
    // Declarar las variables
    float nota1;
    char calificacion;
    int nota2;

    // Decir al usuario que ingrese la nota

    cout << "Ingrese una nota ";
    cin >> nota1;

    // Hacer que solo utilice del 1 al 100

    if(nota1 >100 || nota1 <1){
        cout << "La nota esta fuera de rango del 1 al 100";
    } else {
       
        // Crear las condiciones usando if y else
        if (nota1 >= 90) nota2 = 6;
        else if (nota1 <90 && nota1 >=85) nota2 = 5;
        else if (nota1 <85 && nota1 >=80) nota2 = 4;
        else if (nota1 <80 && nota1 >=70) nota2 = 3;
        else if (nota1 <70 && nota1 >=69) nota2 = 2;
        else if (nota1 <69) nota2 = 1;
    

        // Utilizar el swtich

        switch (nota2) {
            case 6: calificacion = 'A'; 
            break;
            case 5: calificacion = 'B'; 
            break;
            case 4: calificacion = 'C'; 
            break;
            case 3: calificacion = 'D'; 
            break;
            case 2: calificacion = 'E'; 
            break;
            case 1: calificacion = 'F'; 
            break;

        default: calificacion = '0'; 
        break;
        
    }

    cout << "La calificacion es " << calificacion;

    }
    return 0;
}