#include <iostream>

using namespace std;
/**
* Implementar un programa que solicite por teclado 2 caracteres,
* los cuales seran numero (validar si son numeros) si no lo son,
* enviar un mensaje de error.
* Posteriormente imprimir la suma de dichos numeros.
*/
int main()
{
    char num1; ///  1
    char num2; ///  3

    cout << "Ingrese el primer caracter: ";
    cin >> num1;
    cout << "Ingrese el segundo caracter: ";
    cin >> num2;
    int valNum1 = static_cast<int>(num1);
    int valNum2 = static_cast<int>(num2);
    if( (valNum1 >= 48 && valNum1 <= 57) && (valNum2 >= 48 && valNum2 <= 57) ) {
        cout << "La suma es : " << ((valNum1-48) + (valNum2-48)) << endl;
    } else {
        cout << "Solo se admiten numeros" << endl;
    }
    return 0;
}
