#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite por teclado: una cadena
* incluyendo espacios en blanco y un caracter e imprima la
* cantidad que veces en que dicho caracter se repite en
* la cadena ingresada.
**/
int main()
{
    string cadena;
    char caracter;
    int len, i = 0, cont = 0;

    cout << "Ingrese una cadena por favor: ";
    getline(cin, cadena);
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    len = cadena.length();

    while (i < len) {
        if (cadena.at(i) == caracter) {
            cont = cont + 1;
        }
        i = i + 1;
    }
    cout << "El numero de  veces que aparece el caracter " <<
            caracter << " es " << cont << "." << endl;
    return 0;
}
