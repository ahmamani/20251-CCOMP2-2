#include <iostream>

using namespace std;
 /**
 * Implemente un programa que solicite por teclado un numero entero
 * positivo e indique si dicho numero representa un NUMERO PRIMO.
 **/
int main()
{
    long long val;
    cout << "Ingrese un numero: ";
    cin >> val;

    bool flag = true;
    for(long long i = 2; i < val; i++) {
        if(val % i == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "ES PRIMO :D" << endl;
    } else {
        cout << "NO ES PRIMO :/" << endl;
    }
    return 0;
}
