/**
 * @file: Collection.cpp
 * @assignment_name:  01: Try it out Activity: Collection
 * @author: Rick Smith (rickysmith@mail.weber.edu)
 * @date: 10/19/2022
 * @brief: program to display use of objects and simple arrays
 *
 */

#include "Collection.h"
#include <ostream>

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

// getters
//returns the number of elements in the array.Unlike c - strings where we had a null - terminator to mark the end of the array, 
//in this case you will need a variable to keep track of the number of elements currently in the array.
int Collection::getSize() { 
	//check this
	return sizeof(myArray)/sizeof(double); //dividing chunk of memory to find how many positions in array. 
}

//returns the maximum number of elements allowed in the current array.
int Collection::getCapacity(){
	return capacity_;	
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

// setters

// other methods
//As you add the value to the back of the array, you should also check update the size(i.e.the number of elements in the array).
//If the new item exceeds the max size of the list, throw a runtime error...
void Collection::add(double value) {}

//throw runtime_error("List Full");
//throw Collection::runtime_error("List Full") {}

//This will add an item to the front of the list.If the new item exceeds the max size, throw a runtime_exception.
void Collection::addFront(double value) {}

//returns the position of needle in the list, -1 if not found
int Collection::find(double needle) {}




