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

std::string Student::getName() const {
    return name;
}

void Student::setName(std::string n) {
    name = n;
}

int Student::getCode() const {
    return code;
}

void Student::setCode(int c) {
    code = c;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int a) {
    age = a;
}

void Student::print() const {
    std::cout << "Nombre: " << name
              << ", Codigo: " << code
              << ", Edad: " << age << std::endl;
}
