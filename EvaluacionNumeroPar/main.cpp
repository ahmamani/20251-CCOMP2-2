#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite un numero
* y evalue si dicho numero es par.
*/
int main()
{
    long num;
    cout << "Ingrese un numero por favor: ";
    cin >> num;

    if( !(num % 2) ) {
        cout << "ES PAR" << endl;
    } else {
        cout << "ES IMPAR" << endl;
    }

    return 0;
}
