#include <iostream>

using namespace std;

int* f() {
    int *ptr1 = new int;
    *ptr1 = 50;
    return ptr1;
}

int main()
{
    /**
    * OPERADOR new
    *       sirve para reservar memoria en el heap.
    * OPERADOR delete
    *       sirve para liberar memoria del heap.
    */
    int *ptr = new int; // expresion para reservar memoria para un entero
    *ptr = 10;
    cout << *ptr << endl;
    delete ptr; // expresion para liberar memoria

    int *ptr2 = f();
    cout << *ptr2 << endl;
    delete ptr2;

    return 0;
}
