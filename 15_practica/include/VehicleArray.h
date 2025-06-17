#ifndef VEHICLEARRAY_H
#define VEHICLEARRAY_H

#include "Vehicle.h"

class VehicleArray
{
    private:
        int size;
        Vehicle **data;

    public:
        VehicleArray(){
            this->size = 0;
            this->data = new Vehicle*[0];
        }
        VehicleArray(Vehicle *arr[], int size) {
            this->size = size;
            this->data = new Vehicle*[size];
            for(int i = 0; i < size; i++)
                this->data[i] = arr[i];
        }

        ~VehicleArray(){
            delete[] data;
        }

        void push_back(Vehicle *v) {
            Vehicle **tmp = new Vehicle*[size+1];
            for(int i = 0; i < size; i++)
                tmp[i] = data[i];
            tmp[size] = v;
            size += 1;
            delete[] data;
            data = tmp;
        }
		int getSize() const {
		    return this->size;
		}
		void print() const {
            std::cout << "[ ";
            for(int i = 0; i < size; i++) {
                this->data[i]->print();
                std::cout << ", ";
            }
            std::cout << " ]" << std::endl;
		}
};

#endif // VEHICLEARRAY_H
