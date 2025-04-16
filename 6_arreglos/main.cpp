#include <iostream>

using namespace std;

int main()
{
    /**
    * Conjunto de elementos del mismo tipo de dato
    * almacenados en memoria de forma consecutiva.
    */
    int arreglo[6];
    arreglo[0] = 10;
    arreglo[1] = 1;
    arreglo[2] = 5;
    arreglo[3] = 8;
    arreglo[4] = 6;
    arreglo[5] = 18;

    for(int i = 0; i < 6; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    for(int i = 5; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    string cad = "ciencia";
    for(int i = 0; i < cad.length(); i++) {
        cout << cad[i] << " ";
    }


    return 0;
}
