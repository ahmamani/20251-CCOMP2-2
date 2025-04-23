#include <iostream>

using namespace std;

/**
* PUNTEROS
* ========
*
* Definición: Es una variable que almacena dirección de
*               memoria de otra variable del mismo tipo.
*
* Declaración: TIPO_DE_DATO *NOMBRE_DEL_PUNTERO;
*
* Operador de Dirección (&): Es un operador unario que obtiene
*                           la dirección de memoria de una variable.
*
* Operador de Indirección (*): Es un operador unario que sirve para
*                           obtener el valor de una dirección de memoria.
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
    ptr = &n; // estamos asignando la dirección de memoria de la variable n a ptr.
    cout << ptr << endl;
    cout << *ptr << endl; // obteniendo el valor de la dirección de memoria que tiene ptr.

    int m = 20;
    ptr = &m;
    cout << *ptr << endl;
    ///////-----------------------------------
    ///////-----------------------------------


    return 0;
}
