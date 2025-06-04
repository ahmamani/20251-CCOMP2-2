#ifndef STUDENTARRAY_H
#define STUDENTARRAY_H

#include "Student.h"

class StudentArray {
	private:
		int size;
		Student *data;
	public:
		StudentArray();
		StudentArray(Student arr[], int size);
		~StudentArray();

		void push_back(Student st);
		int getSize() const;
		void print() const;
};

#endif
