/**
 * @file: Collection.cpp
 * @assignment_name:  01: Try it out Activity: Collection
 * @author: Rick Smith (rickysmith@mail.weber.edu)
 * @date: 10/19/2022 - Begin : 10/26/2022 - End
 * @brief: program to display use of objects and simple arrays
 *
 */

#include "Collection.h"
#include <ostream>
using namespace std;

//constructor
//argument constructor that takes an integer parameter and uses it to set the initial capacity of the array
Collection::Collection(int size) {
	if (size < 1) {
		//check for valid array		
		size = 1;
	}
	
	myArray = new double[size];
	capacity_ = size;	
}


//Gets the value stored at the specified position. Throws and out_of_range exception if the index is outside the bounds of the array.
double Collection::get(int ndx) {
	return myArray[ndx];
}
//Returns the first value in the array. Throws an out_of_range exception if the array is empty.
double Collection::getFront() {
	return myArray[0];
}

//Returns the last value in the array.Throws and out_of_range exception if the array is empty.
double Collection::getEnd() {
	int endPos = getCapacity() - 1;
	return myArray[endPos];
}


// other methods
//As you add the value to the back of the array, you should also check update the size(i.e.the number of elements in the array).
//If the new item exceeds the max size of the list, throw a runtime error...
void Collection::add(double value) {
	if (getSize() < getCapacity()) {
		myArray[getSize()] = value;
		arraySizeIncrease();		
	}

	else {
		throw runtime_error("List Full");
	}	
}

//throw runtime_error("List Full");
//throw Collection::runtime_error("List Full") {}

//This will add an item to the front of the list.If the new item exceeds the max size, throw a runtime_exception.
void Collection::addFront(double value) {
	
	if (getSize() < getCapacity()) {
		for (int i = getSize(); i > 0; i--) {
			myArray[i+1] = myArray[i];			
		}
		myArray[0] = value;
		arraySizeIncrease();
	}
	else {		
		throw runtime_error("List Full");
	}
}

//returns the position of needle in the list, -1 if not found
int Collection::find(double needle) { 
	
	for (int i = 0; i <= getCapacity(); i++) {
		if (myArray[i] = needle) {
			return i;
		}
	}
	return -1;	
}