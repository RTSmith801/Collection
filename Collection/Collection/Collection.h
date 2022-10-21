#ifndef COLLECTION_H
#define COLLECTION_H
#include <iostream>

class Collection{

private:	
	int capacity_ = 5;
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
	int getSize();
	int getCapacity() const;
	double get(int ndx);
	double getFront();
	double getEnd();

	// setters
	
	// other methods
	void add(double value);
	//throw runtime_error("List Full");
	void addFront(double value);
	
	int find(double needle);

	//overload the extraction operator to display the list.
	friend std::ostream& operator<<(std::ostream& out, const Collection & c) {
		int capacity = c.getCapacity();
		for (int i = 0; i < capacity; i++) {
			out << c.myArray[i] << std::endl;			
		}
		return out;
	}

};

#endif
