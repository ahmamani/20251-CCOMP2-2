#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student st1("Jose", 3423423, 20);
	Student st2("Paulo", 2342342, 18);
	Student st3("Juan", 55555, 19);
	Student st4("Jorge", 232323, 21);
	
	Student *pst = new Student[4];
	pst[0] = st1;
	pst[1] = st2;
	pst[2] = st3;
	pst[3] = st4;

	for(int i = 0; i < 4; i++) {
		pst[i].print();
	}	
	

	delete[] pst;	
    return 0;
}
