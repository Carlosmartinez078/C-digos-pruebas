#include <iostream>

using namespace std;

int main (){
float Sueldo;
int Sueldo2, opciones;

// Preguntar que servicio solicita 

cout << "Seleccione servicio a utilizar" << endl; 

cout << "1. Seguro de vida" << endl;


cout << "2. Seguro por muerte" << endl;


cout << "3. Gastos funerarios" << endl;


cout << "4. Seguro por invalidez" << endl;

cin >> opciones;

// Utilizar el switch para las diferentes opciones

switch (opciones){
case 1:

    cout << "Cuanto es su salario";
    cin >> Sueldo;

// limitar  el seguro de vida por el salario del cliente

if (Sueldo <=910.00){
    cout << "Su monto de seguro es: $10,000.00" << endl;

} else if (Sueldo >910.01 && Sueldo  <= 1255.00){
cout << "Su monto de seguro es $14,000.00" << endl;

} else if (Sueldo >1,255.01 && Sueldo  <= 1,630.00){
cout << "Su monto de seguro es $18,000.00" << endl;

}else if (Sueldo >1,630.01){
cout << "Su monto de seguro es $22,000.00" << endl;
} 
break;

// caso 2

case 2:

cout << "Cuanto es su salario";
cin >> Sueldo;

// limitar  el seguro de vida por el salario del cliente

if (Sueldo <=910.00){
    cout << "En caso de una muerte por cualquier causa la empresa le otorgara la cantidad de: $10,000.00" << endl;

} else if (Sueldo >910.01 && Sueldo  <= 1255.00){
cout << "En caso de una muerte por cualquier causa la empresa le otorgara la cantidad de: $14,000.00" << endl;

} else if (Sueldo >1,255.01 && Sueldo  <= 1,630.00){
cout << "En caso de una muerte por cualquier causa la empresa le otorgara la cantidad de: $18,000.00" << endl;

}else if (Sueldo >1,630.01){
cout << "En caso de una muerte por cualquier causa la empresa le otorgara la cantidad de: $22,000.00" << endl;
} 
break;

// caso 3

case 3:
cout << "Cuanto es su salario";
cin >> Sueldo2;

if (Sueldo2 <=910.00){
 cout << "Su monto de seguro es: $10,000.00" << endl;
 cout << "En caso de una invalidez total o permanente la empresa le otorgara la cantidad de: $10,000.00*0.50" <<endl;
 cout << "Los siguientes 12 meses la empresa le dara el restante" << 5000/12 << "Cada mes" <<endl;

} else if (Sueldo2 >910.01 && Sueldo2  <= 1255.00){
 cout << "Su monto de seguro es $14,000.00" << endl;
 cout << "En caso de una invalidez total o permanente la empresa le otorgara la cantidad de: $14,000.00*0.50" <<endl;
 cout << "Los siguientes 12 meses la empresa le dara el restante" << 7000/12 << "Cada mes" <<endl;

} else if (Sueldo2 >1,255.01 && Sueldo2  <= 1,630.00){
    cout << "Su monto de seguro es $18,000.00" << endl;
    cout << "En caso de una invalidez total o permanente la empresa le otorgara la cantidad de: $18,000.00*0.50" <<endl;
    cout << "Los siguientes 12 meses la empresa le dara el restante" << 9000/12 << "Cada mes" <<endl;

}else if (Sueldo2 >1,630.01){
cout << "Su monto de seguro es $22,000.00" << endl;
cout << "En caso de una invalidez total o permanente la empresa le otorgara la cantidad de: $22,000.00*0.50" <<endl;
cout << "Los siguientes 12 meses la empresa le dara el restante" << 11000/12 << "Cada mes" <<endl;
}

break;

//caso 4
case 4:
cout << "Cuanto es su salario";
cin >> Sueldo2;

if (Sueldo2 <=910.00){
    cout << "Su monto de seguro es: $10,000.00" << endl;
    cout << "En caso de gastos funerarios la empresa le otorgara la cantidad de: $" << 10000*0.15 <<endl;

}else if (Sueldo2 >910.01 && Sueldo2  <= 1255.00){
    cout << "su monto de seguro es $14,000.00" << endl;
    cout << "En caso de gastos funerarios la empresa le otorgara la cantidad de: $" << 14000*0.15 <<endl;
    cout << "Pero no se podria otorgar porque el monto maximo es de $1750";

}else if (Sueldo2 >1,255.01 && Sueldo2  <= 1,630.00){
    cout << "Su monto de seguro es $18,000.00" << endl;
    cout << "En caso de gastos funerarios la empresa le otorgara la cantidad de: $" << 18000*0.15 <<endl;
    cout << "Pero no se podria otorgar porque el monto maximo es de $1750";

}else if (Sueldo2 >1,630.01)
    cout << "Su monto de seguro es $22,000.00" << endl;
    cout << "En caso de gastos funerarios la empresa le otorgara la cantidad de: $" << 22000*0.15 <<endl;
    cout << "Pero no se podria otorgar porque el monto maximo es de $1750";
break;

    default: 
    break; 
}
    return 0;
}



