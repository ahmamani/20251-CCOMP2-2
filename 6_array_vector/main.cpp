#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printArray(array<int, 5> arr) {
    int size = arr.size();
    cout << "[ ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}
// paso por valor por eso no ordena en el main
void bubblesort(array<int, 5> arr) {
    int size = arr.size();
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    cout << "Dentro de Bubblesort: ";
    printArray(arr);
}
int main()
{
    array<int, 5> arr = {5,3,2,8,7};
    bubblesort(arr);
    printArray(arr);

    vector<int> vec;
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(1);
    cout << "[ ";
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "]" << endl;

    return 0;
}
