#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite por teclado: una cadena
* incluyendo espacios en blanco y una palabra e indique si
* dicha palabra se encuentra en dicha cadena y cuantas veces.
* Ejemplo:
*       "ciendecia de la computacion de la ucsp"  -> cadena
*       "de"                                    -> palabra
*       La palabra 'de' se encuentra 3 veces.
**/
int main()
{
    string cad;
    string palabra;
    cout << "Ingrese una frase: ";
    getline(cin, cad);
    cout << "Ingrese una palabra a buscar: ";
    cin >> palabra;

    int lencad = cad.length();
    int idxcad = 0;
    int lenpal = palabra.length();
    int idxpal = 0;
    int counter = 0;
    bool flag = true;
    while(idxcad < lencad) {
        if(cad.at(idxcad) == palabra.at(idxpal)) {
            while(idxpal < lenpal) {
                if(cad.at(idxcad) != palabra.at(idxpal)) {
                    flag = false;
                    break;
                }
                idxpal++;
                idxcad++;
            }
            if(flag) {
                counter++;
            }
            idxpal = 0;
        }
        idxcad = idxcad + 1;
    }
    cout << counter << endl;
    return 0;
}
