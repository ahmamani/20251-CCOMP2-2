#include <iostream>

using namespace std;
/**
* DEFINICIÓN DE ARREGLOS
*   Conjunto de elementos del mismo tipo de dato
*   almacenados en memoria de forma consecutiva.
*/
int main()
{
    int arreglo[6];
    arreglo[0] = 10;
    arreglo[1] = 1;
    arreglo[2] = 5;
    arreglo[3] = 8;
    arreglo[4] = 6;
    arreglo[5] = 18;

    int *ptr;
    ptr = &arreglo[0];
    cout << *ptr << endl; // 10
    ptr = &arreglo[1];
    cout << *ptr << endl; // 1
    ptr = &arreglo[2];
    cout << *ptr << endl; // 5
    ptr = &arreglo[3];
    cout << *ptr << endl; // 8
    ptr = &arreglo[4];
    cout << *ptr << endl; // 6
    ptr = &arreglo[5];
    cout << *ptr << endl; // 18

    /**
    * El nombre de un arreglo es un puntero
    * constante al primer elemento del arreglo.
    */
    cout << *(arreglo+0) << endl;
    cout << *(arreglo+1) << endl;
    cout << *(arreglo+2) << endl;
    cout << *(arreglo+3) << endl;
    cout << *(arreglo+4) << endl;
    cout << *(arreglo+5) << endl;

    int size = sizeof(arreglo) / sizeof(arreglo[0]);
    ptr = arreglo;
    for(int i = 0; i < size; i++) {
        cout << *(ptr+i) << " ";
    }

    return 0;
}
