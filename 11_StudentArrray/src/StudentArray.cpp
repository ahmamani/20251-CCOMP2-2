#include "StudentArray.h"

StudentArray::StudentArray()
{
    this->size = 0;
    this->data = new Student[0];
}

StudentArray::StudentArray(Student arr[], int size) {
    this->size = size;
    this->data = new Student[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

StudentArray::~StudentArray()
{
    delete[] data;
}

void StudentArray::push_back(Student st) {
    /**
    * 1. Reservar memoria para un nuevo array tmp con size + 1
    * 2. Copiar los elements de data a tmp
    * 3. asignar st al final de tmp
    * 4. actualizar size a size+1
    * 5. liberar la memoria apuntada por data
    * 6. apunta data a tmp
    */
    Student *tmp = new Student[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    tmp[size] = st;
    size += 1;
    delete[] data;
    data = tmp;
}

int StudentArray::getSize() const {
    return this->size;
}
void StudentArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        this->data[i].print();
    std::cout << " ]" << std::endl;
}
