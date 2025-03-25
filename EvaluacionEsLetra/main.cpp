#include <iostream>

using namespace std;
/**
* Implemente un programa que solicite por teclado un caracter
* e indique si dicho caracter es una letra.
*/
int main()
{   /**
        if (CONDICION) {
            // se ejecuta si la condicion es verdadera
        } else {
            // se ejecuta si la condicion es falsa
        }
        //// OPERADORES LOGICOS //////
        // and      -> &&
        // or       -> ||
        // negacion -> !
        //// OPERADORES RELACIONALES //////
        // MAYOR        -> >
        // MENOR        -> <
        // MAYOR O IGUAL-> >=
        // MENOR O IGUAL-> <=
        //// OPERADORES EQUIVALENCIA //////
        // ES IGUAL A       -> ==
        // ES DIFERENTE A   -> !=
        ///////////////////////////////////
    */
    char caracter;
    cout << "Ingrese un caracter por favor: ";
    cin >> caracter;
    int val = static_cast<int>(caracter);
    if( (val >= 65 && val <= 90) || (val >= 97 && val <= 122 )) {
        cout << "Es letraaaaaaa!!!!!!!" << endl;
    } else {
        cout << "NO es letraaaaaaa!!!!!!!" << endl;
    }

    return 0;
}
