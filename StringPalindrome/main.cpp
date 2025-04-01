#include <iostream>

using namespace std;

/**
* Implemente un programa que reciba una cadena de 4 caracteres
* (validar si tiene 4 caracteres) e indicar si dicha cadena
* representa un palindrome.
*       osso    es
*       adda    es
*       asdf    no es
*/
int main()
{
    string cadena;
    cout << "Ingresa una cadena de 4 caracteres: " << endl;
    cin>>cadena;

    if (cadena.length() == 4) {
        if ( cadena.at(0) == cadena.at(3) && cadena.at(1) == cadena.at(2)) {
            cout << "Es palindromo"<< endl;
        } else {
            cout << "No es palindromo"<< endl;
        }
    } else {
        cout << "No es de 4 caracteres!!!!!" << endl;
    }
    return 0;
}
