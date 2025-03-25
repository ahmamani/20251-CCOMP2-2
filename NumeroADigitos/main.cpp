#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite un numero (4 digitos)
* e imprima cada digito de dicho numero horizontalmente
* Ejemplo:  3216
*           3
*           2
*           1
*           6
*/
int main()
{
    int num;
    cout << "Ingrese un numero de 4 digitos, por favor :3 : ";
    cin >> num;

    cout << (num / 1000) << endl;
    cout << ((num / 100) % 10) << endl;
    cout << ((num / 10) % 10) << endl;
    cout << (num % 10) << endl;
    return 0;
}
