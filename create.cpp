#include <iostream>
#include <fstream>

using namespace std;

string linea;

int main(){

    ofstream archivo ("proyecto.txt");

    //introducir texto que se quiere escribir

    archivo << "Hola amiguita" << " " << "como te va"<< endl;

    archivo.close();


return 0;

}



    /*leer archivo que se creo

    ifstream read ("create.txt");

    while (getline(read, linea)){
        cout << linea << endl;
    }
    
    read.close();

    */