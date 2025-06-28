#include <iostream>
#include <fstream>

using namespace std;

string linea;
    
int main(){

    ifstream archivo ("texto.txt");

    while(getline(archivo, linea)){    //while para llamar todas las lineas del txt
        cout << linea << endl;
    }
    archivo.close();

return 0;

}


/*
    while(getline(archivo, linea)){
*/