#include <iostream>

using namespace std;

void printArray(int *arr, int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

void reverseArray(int *ini, int *fin) {
    while(ini < fin) {
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    reverseArray(arr, arr+size-1);

    printArray(arr, size);

    return 0;
}
