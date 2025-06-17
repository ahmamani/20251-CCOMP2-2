#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle
{
    protected:
        std::string license;
        int year;
    public:
        Vehicle(){};
        Vehicle(const std::string &myLicense, const int myYear):
                license(myLicense), year(myYear){};
        const std::string &getLicense() const {
            return license;
        }
        const int getYear() const {
            return year;
        }
        virtual void print() const {
            std::cout << "License: " << license << ", Year: " << year << std::endl;
        }

};

#endif // VEHICLE_H
