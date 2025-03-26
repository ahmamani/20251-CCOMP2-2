#include <iostream>

using namespace std;

int main()
{
    cout << 'A' << endl; // Imprime el caracter A
    cout << "A" << endl; // Imprime la cadena (string) que contiene el caracter A

    string name;
    int age;
    cout << "Ingresa tu nombre: ";
    cin >> name;
    cout << "Ingresa tu edad: ";
    cin >> age;

    cout << "Habla causa " << name << " que novelas!!" << endl;
    cout << "Tu tienes " << age << " años!!!  :3" << endl;
    return 0;
}
