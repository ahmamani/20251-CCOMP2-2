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
            name = "";
            code = 0;
            age = 0;
        }
        Student(std::string n, int c, int a){
            name = n;
            code = c;
            age = a;
        }
        ~Student(){
            std::cout << "Llamando a destructor de "
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
};

#endif // STUDENT_H
