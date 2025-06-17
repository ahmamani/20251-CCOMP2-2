#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
    private:
        int capacidad;
    public:
        Truck(const std::string &myLicense, const int myYear, const int myCapacity)
                : Vehicle(myLicense, myYear), capacidad(myCapacity){};
        const int getCapacity() const {
            return capacidad;
        }
        void print() const {
            std::cout << "License: " << license << ", Year: " << year <<
                ", Capadidad: " << capacidad << " Toneladas";
        }

};

#endif // TRUCK_H
