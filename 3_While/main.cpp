#include <iostream>

using namespace std;

/**
* BUCLE WHILE
*   Es una "estructura de control de flujo" que nos sirve para
*   ejecutar un conjunto de instrucciones mientras se cumpla
*   una condición.
        while (CONDICION) {
            sentencia 1
            sentencia 2
            ....
            sentencia n
        }
**/
int main()
{
    string name = "Ciencia de la Computacion";
    int len = name.length();
    int i = 0;
    while (i < len) {
        cout << name.at(i) << endl;
        i = i + 1;
    }

    return 0;
}





