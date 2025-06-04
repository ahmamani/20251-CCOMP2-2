#include "Student.h"

Student::Student()
{
    name = "";
    code = 0;
    age = 0;
}

Student::Student(std::string n, int c, int a){
    name = n;
    code = c;
    age = a;
}

Student::~Student()
{
}

int Student::getCode() const {
    return code;
}

void Student::setCode(int c) {
    code = c;
}

void Student::print() const {
    std::cout << "Nombre: " << name
              << ", Codigo: " << code
              << ", Edad: " << age << std::endl;
}
