#include <iostream>

using namespace std;

/**
* Una función es recursiva cuando se llama a sí misma.
* Factorial
*       n! = n * (n-1)!
        (n-1)! = (n-1) * (n-2)!
        ...
        2! = 2 * 1!
        1! = 1
*/
int factorial(int n) {
    if(n == 1 || n == 0) { /** CASO BASE **/
        return 1;
    } else {
        return n * factorial(n-1);  /** PASO RECURSIVO */
    }
}|

int main()
{
    cout << factorial(5) << endl;
    return 0;
}
