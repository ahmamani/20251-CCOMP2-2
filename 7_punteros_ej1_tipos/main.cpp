#include <iostream>

using namespace std;

int main()
{
    int n = 20;
    int *ptr = &n;
    cout << ptr << endl;
    cout << *&n << endl;
    *ptr = 60;
    cout << n << endl;

    int x = 10;
    ptr = &x;
    *ptr = 1000;
    cout << x << endl;

    int y = 10000;
    ptr = &y;
    *ptr = 400000;
    cout << y << endl;
    cout << *ptr << endl;

    int *ptr2 = &x;
    cout << *ptr2 << endl;

    double d = 230.40;
    double *ptr3 = &d;
    cout << *ptr3 << endl;

    char car = 'A';
    char *ptr4 = &car;
    cout << *ptr4 << endl;

    //int *ptr5 = &d; Error

    return 0;
}
