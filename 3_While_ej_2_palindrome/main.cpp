#include <iostream>

using namespace std;

/**
* Implemente un programa que solicite por teclado una cadena
* incluyendo espacios en blanco e indique si dicha cadena
* representa un palindrome
**/
int main()
{
    bool f=true;
    string palabra;
    char c;
    cout<<"ingrese una palabra:  ";
    getline(cin,palabra);
    int len=(palabra.length()/2), flag=0,flg1=0, flg2=palabra.length()-1;
    while (f){
        if(palabra.at(flag)==palabra.at(flg2)){
                flag++;
                flg2--;
                if(flag>=len && flg2<len){
                    cout<<"la palabra es un palindromo"<<endl;
                    f=false;
                }
        }
        else{
            cout<<"la palabra no es un palindromo";
            f=false;
        }
    }



    /*
    string cadena;
    cout << "Ingrese una cadena por favor: ";
    getline(cin, cadena);

    int len = cadena.length();
    int ini = 0, fin = len - 1;

    while( ini < fin ) {

    }*/

    return 0;
}
