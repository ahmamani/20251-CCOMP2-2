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

void StudentArray::insert(Student st, int pos) {
    /**
    * 1. Reservar memoria para un nuevo array tmp con size + 1
    * 2. Copiar los elementos de data a tmp hasta pos
    * 3. asignar st en pos
    * 4. Completar la copia de elems de data a tmp
    * 5. actualizar size a size+1
    * 6. liberar la memoria apuntada por data
    * 7. apunta data a tmp
    **/
    Student *tmp = new Student[size+1];
    for(int i = 0; i < pos; i++)
        tmp[i] = data[i];
    tmp[pos] = st;
    for(int i = pos; i < size; i++)
        tmp[i+1] = data[i];
    size += 1;
    delete[] data;
    data = tmp;
}

void StudentArray::remove(int pos) {
    /**
    * 1. Reservar memoria para un nuevo array tmp con size - 1
    * 2. Copiar los elementos de data a tmp omitiendo el
            elemento en la posicion pos
    * 3. actualizar size a size+1
    * 4. liberar la memoria apuntada por data
    * 5. apunta data a tmp
    **/
    Student *tmp = new Student[size-1];
    for(int i = 0; i < size-1; i++) {
        if(i < pos)
            tmp[i] = data[i];
        else
            tmp[i] = data[i+1];
    }
    size -= 1;
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
