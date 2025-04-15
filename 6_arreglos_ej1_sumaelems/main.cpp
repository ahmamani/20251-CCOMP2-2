#include <iostream>

using namespace std;

/**
* Implemente un programa para sumar los elementos de un
* arreglo de enteros.
**/
int main()
{
    int arr[] = {1,2,3,4,5,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}
