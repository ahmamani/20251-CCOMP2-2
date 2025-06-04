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
        Student();
        Student(std::string n, int c, int a);
        ~Student();
        std::string getName() const;
        void setName(std::string n);
        int getCode() const;
        void setCode(int c);
        int getAge() const ;
        void setAge(int a);
		void print() const;
};

#endif // STUDENT_H
