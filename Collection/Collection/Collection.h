#ifndef COLLECTION_H
#define COLLECTION_H
#include <iostream>
using namespace std;

class Collection{

private:	
	int capacity_ = 10;
	int arraySize_ = 0; 
	double *myArray;
	

public:
	//constructors
	//Default constructor for the collection.Initializes the array to a fixed size of your choice
	Collection() { myArray = new double[capacity_]; }
	Collection(int size);

	// destructor
	~Collection() { delete[] myArray; } // dealocate data from dynamic array. 

	// static members
	
	// getters
	//returns the number of elements in the array.
	int getSize() const {return arraySize_;}
	////returns the maximum number of elements allowed in the current array.
	int getCapacity() {return capacity_;};

	double get(int ndx);
	double getFront();
	double getEnd();

	// setters
	void arraySizeIncrease() {arraySize_ += 1;}
	
	// other methods
	void add(double value);	
	void addFront(double value);	
	int find(double needle);

	//overload the extraction operator to display the list.
	friend std::ostream& operator<<(std::ostream& out, const Collection & c) {
		int size = c.getSize();
		if (size >= 0) {
			out << c.myArray[0];
		}

		for (int i = 1; i < size; i++) {
			out << " " << c.myArray[i]; 			
		}
		return out;
	}
};

#endif