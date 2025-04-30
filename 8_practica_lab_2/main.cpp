#include <iostream>

using namespace std;

int main()
{
    ///////////////////////////////////////
    /** Pregunta 1 */
    int arr[] = {2,5,9,10,7,4,64,5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0)
            sum += arr[i];
    }
    cout << "Suma impares: " << sum << endl;
    ///////////////////////////////////////

    ///////////////////////////////////////
    /** Pregunta 2 */
    int mayor1 = 0;
    int mayor2 = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > mayor1)
            mayor1 = arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[i] == mayor1)
            continue;
        if(arr[i] > mayor2)
            mayor2 = arr[i];
    }
    cout << mayor2 << endl;
    ///////////////////////////////////////

    ///////////////////////////////////////
    /** Pregunta 3 */
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,5,4,3,2,1};

    const int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr3[size1];
    for(int i = 0; i < size1; i++) {
        *(arr3+i) = *(arr1+i) + *(arr2+i);
    }
    for(int i = 0; i < size1; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    ///////////////////////////////////////

    ///////////////////////////////////////
    /** Pregunta 4 */
    const int size2 = sizeof(arr1) / sizeof(arr1[0]);
    int arr4[size2*2];
    for(int i = 0; i < size2; i++) {
        *(arr4+i*2) = *(arr1+i);
        *(arr4+i*2+1) = *(arr2+i);
    }
    for(int i = 0; i < size2*2; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;
    ///////////////////////////////////////

    return 0;
}
