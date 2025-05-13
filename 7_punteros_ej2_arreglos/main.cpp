#include <iostream>

using namespace std;
/**
* DEFINICIÓN DE ARREGLOS
*   Conjunto de elementos del mismo tipo de dato
*   almacenados en memoria de forma consecutiva.
*/

void printArray(int *arr, int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

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
    //cout << *ptr << endl; // 10
    ptr = &arreglo[1];
    //cout << *ptr << endl; // 1
    ptr = &arreglo[2];
    //cout << *ptr << endl; // 5
    ptr = &arreglo[3];
    //cout << *ptr << endl; // 8
    ptr = &arreglo[4];
    //cout << *ptr << endl; // 6
    ptr = &arreglo[5];
    //cout << *ptr << endl; // 18

    /**
    * El nombre de un arreglo es un puntero
    * constante al primer elemento del arreglo.
    */
    cout << arreglo << endl;
    cout << (arreglo+0) << endl;
    cout << (arreglo+1) << endl;
    cout << (arreglo+2) << endl;
    cout << (arreglo+3) << endl;
    cout << (arreglo+4) << endl;
    cout << (arreglo+5) << endl;

    int size = sizeof(arreglo) / sizeof(arreglo[0]);
    ptr = arreglo;
    /**
    * ARITMÉTICA DE PUNTEROS
    *  Se pueden usar los operadores ++ -- en
    *  punteros
    *  ptr++
    */
    for(int i = 0; i < size; i++, ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
    ptr = arreglo;

    int i = 0;
    while(i<size) {
        cout << *ptr << " ";
        ptr++;
        i++;
    }
    cout << endl;
    printArray(arreglo, size);

    return 0;
}
