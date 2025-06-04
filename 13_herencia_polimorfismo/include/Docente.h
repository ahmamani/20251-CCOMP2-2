#ifndef DOCENTE_H
#define DOCENTE_H

#include <string>
#include "Persona.h"

class Docente : public Persona
{
    private:
        std::string academic;
        double salary;
    public:
        Docente();
        Docente(std::string name, int age, std::string academic, double salary);
        std::string getAcademic() const;
        void setAcademic(std::string c);
        void print() const;
};

#endif // DOCENTE_H
