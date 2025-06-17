#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
    private:
        int nroasientos;
    public:
        Car(const std::string &myLicense, const int myYear, const int nasientos)
                : Vehicle(myLicense, myYear), nroasientos(nasientos){};
        const int getNroAsientos() const {
            return nroasientos;
        }
        void print() const {
            std::cout << "License: " << license << ", Year: " << year <<
                ", Nro Asientos: " << nroasientos;
        }
};

#endif // CAR_H
