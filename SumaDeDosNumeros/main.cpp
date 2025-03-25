#include <iostream>

using namespace std;

int main()
{
    /* Tipos de datos basicos */
    /**
        Para trabajar con numeros enteros se utilizan los tipos
        - short
        - int
        - long
        - long long
    */
    /**
        Para declarar una variable en c++
            TIPO NOMBRE_VARIABLE;
    */
    int num1; // declarando una variable de tipo int(entero) que se llama num1
    int num2; // declarando una variable de tipo int(entero) que se llama num2
    num1 = 20;
    num2 = 3;
    cout << "El valor de la suma es: "  << (num1 + num2) << endl;
    cout << "El valor de la resta es: "  << (num1 - num2) << endl;
    cout << "El valor de la multiplicacion es: "  << (num1 * num2) << endl;
    cout << "El valor de la division es: "  << (num1 / num2) << endl;
    cout << "El valor del resto es: "  << (num1 % num2) << endl;
    return 0;
}
