#include <iostream>
#include "Persona.h"

Persona::Persona()
{
    name = "";
    age = 0;
}

Persona::Persona(std::string n, int a){
    name = n;
    age = a;
}

std::string Persona::getName() const {
    return name;
}

void Persona::setName(std::string n) {
    name = n;
}

int Persona::getAge() const {
    return age;
}

void Persona::setAge(int a) {
    age = a;
}

void Persona::print() const {
    std::cout << "Nombre: " << name
              << ", Edad: " << age << std::endl;
}
