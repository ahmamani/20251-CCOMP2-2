#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
    protected:
        std::string name;
        int age;
    public:
        Persona();
        Persona(std::string n, int a);
        std::string getName() const;
        void setName(std::string n);
        int getAge() const ;
        void setAge(int a);
		void print() const;

};

#endif // PERSONA_H
