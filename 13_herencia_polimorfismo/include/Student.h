#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Persona.h"

class Student : public Persona
{
    private:
        int code;
    public:
        Student();
        Student(std::string n, int c, int a);
        ~Student();
        int getCode() const;
        void setCode(int c);
		void print() const;
};

#endif // STUDENT_H
