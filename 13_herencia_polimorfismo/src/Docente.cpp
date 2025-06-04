#include "Docente.h"

Docente::Docente()
{
    name = "";
    academic = "";
    age = 0;
    salary = 0.0;
}

Docente::Docente(std::string name, int age, std::string academic, double salary) {
    this->name = name;
    this->academic = academic;
    this->age = age;
    this->salary = salary;
}


std::string Docente::getAcademic() const {
    return name;
}

void Docente::setAcademic(std::string n) {
    academic = n;
}

