#include <iostream>

using namespace std;

/**
* Implemente una función que reciba un numero y retorne
* true si es primo y false caso contrario.
*/
bool esPrimo(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 2; i < n; i++)
        if(esPrimo(i))
            cout << i << " ";
    cout << endl;
    return 0;
}
