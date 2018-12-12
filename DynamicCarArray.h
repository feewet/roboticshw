# DynamicCarArray.h

#ifndef DYNAMICCARARRAY_H_
#define DYNAMICCARARRAY_H_

// Dynamnic array to hold Cars.
class DynamicCarArray {
	private:
		Car* v; // vector
		int size; // size
		int count; // number of elements inserted
	public:
		DynamicCarArray(); // default constructor
		~DynamicCarArray(); // default constructor
		void print(); // print array
		void delete(); // delete array
		void add(Car c); // add Car to array
		Car get(int n); // Get car at index n
		void remove(int n); // remove nth element
		void grow(); // grow Array
		void shrink(); // shrink array
};

#endif