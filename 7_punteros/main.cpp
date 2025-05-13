#include <iostream>

using namespace std;

/**
* PUNTEROS
* ========
*
* Definici�n: Es una variable que almacena direcci�n de
*               memoria de otra variable del mismo tipo.
*
* Declaraci�n: TIPO_DE_DATO *NOMBRE_DEL_PUNTERO;
*
* Operador de Direcci�n (&): Es un operador unario que obtiene
*                           la direcci�n de memoria de una variable.
*
* Operador de Indirecci�n (*): Es un operador unario que sirve para
*                           obtener el valor de una direcci�n de memoria.
*
*
**/
int main()
{
    int n; // estamos declarando la variable entera llamado n.
    n = 10; // estamos asignando el valor 10 a la variable n.
    cout << &n << endl;
    cout << n << endl;
    n = 100;

    int *ptr; // estamos declarando la variable puntero a entero llamado ptr.
    ptr = &n; // estamos asignando la direcci�n de memoria de la variable n a ptr.
    cout << ptr << endl;
    cout << *ptr << endl; // obteniendo el valor de la direcci�n de memoria que tiene ptr.

    int m = 20;
    ptr = &m;
    cout << *ptr << endl;
    ///////-----------------------------------
    ///////-----------------------------------


    return 0;
}
