#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student *ptr = new Student();		
	delete ptr;

	int *pa = new int[4];
	// se han hecho ops sobre el arreglo creado
	// con new
	delete[] pa;
	
	Student *pst = new Student[4];	

	delete[] pst;	
    return 0;
}
