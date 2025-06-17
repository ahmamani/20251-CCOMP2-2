#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "VehicleArray.h"

using namespace std;

int main()
{
    Vehicle **ptr = new Vehicle*[3];
    Vehicle *ptr_car = new Car("wer-345", 2026, 2);
    Vehicle *ptr_truck = new Truck("tre-543", 2001, 20);

    Car car("wer-345", 2026, 2);
    Truck truck("tre-543", 2001, 20);

    ptr[0] = ptr_car;
    ptr[1] = ptr_truck;

    VehicleArray va;
    va.push_back(ptr_car);
    va.print();
    va.push_back(ptr_truck);
    va.print();
    return 0;
}
