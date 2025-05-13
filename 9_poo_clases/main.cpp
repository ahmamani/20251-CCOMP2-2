#include <iostream>
#include "Student.h"

using namespace std;

/**
* CLASE:
*   Ideas: una plantilla, un molde, una forma de reutilizar el codigo, un objeto, es molde en el que podemos hacer objetos
*
*   Definición: Es una forma de abstracción (reunir propiedades y comportamiento relacionado)
*           para definir nuevos tipos de datos.
*
* Constructor:
*   Método que se invoca cuando se crea una instancia.
*   Se invoca cuando se le asigna memoria a una instancia.
*
* Destructor:
    Método que se invoca cuando se libera la memoria
    de una instancia
*
**/



int main()
{
    Student st1;
    st1.setName("Jose");
    st1.setCode(1243143);
    st1.setAge(20);
    cout << st1.getName() << endl;
    cout << st1.getCode() << endl;
    cout << st1.getAge() << endl;

    Student st2;
    st2.setName("Juan");
    st2.setCode(555555);
    st2.setAge(18);
    cout << st2.getName() << endl;
    cout << st2.getCode() << endl;
    cout << st2.getAge() << endl;

    Student st3; // llamando al constructor por defecto
    cout << st3.getName() << endl;
    cout << st3.getCode() << endl;
    cout << st3.getAge() << endl;

    Student st4("Pedro", 444444, 19);
    cout << st4.getName() << endl;
    cout << st4.getCode() << endl;
    cout << st4.getAge() << endl;

    return 0;
}
