#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
    private:
        std::string name;
        int code;
        int age;
    public:
        Student() { // default constructor
			std::cout << "Default constructor" << std::endl;
            name = "";
            code = 0;
            age = 0;
        }
        Student(std::string n, int c, int a){
			std::cout << "Constructor con args" << std::endl;
            name = n;
            code = c;
            age = a;
        }
        ~Student(){
            std::cout << "Llamando a destructor"
                    << name << std::endl;
        }
        std::string getName() const {
            return name;
        }
        void setName(std::string n) {
            name = n;
        }
        int getCode() const {
            return code;
        }
        void setCode(int c) {
            code = c;
        }
        int getAge() const {
            return age;
        }
        void setAge(int a) {
            age = a;
        }
		void print() const {
			std::cout << "Nombre: " << name << std::endl;
			std::cout << "Codigo: " << code << std::endl;
			std::cout << "Edad: " << age << std::endl;
		}
};

#endif // STUDENT_H
