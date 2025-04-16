#include <iostream>

using namespace std;

/**
* Implemente un programa que invierta los numeros
* de un arreglo de enteros.
*/
void printArray(int arr[], int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    //// invertir
    int ini = 0;
    int fin = size-1;
    while(ini < fin) {
        int tmp = arr[ini];
        arr[ini] = arr[fin];
        arr[fin] = tmp;
        ini++;
        fin--;
    }

    printArray(arr, size);

    return 0;
}
