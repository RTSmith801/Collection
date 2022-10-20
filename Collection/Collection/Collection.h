#ifndef COLLECTION_H
#define COLLECTION_H

/*

	Collection(): Default constructor for the collection.  Initializes the array to a fixed size of your choice
	Collection(int size): argument constructor that takes an integer parameter and uses it to set the initial capacity of the array
	int getSize(): returns the number of elements in the array. Unlike c-strings where we had a null-terminator to mark the end of the array, in this case you will need a variable to keep track of the number of elements currently in the array.
	int getCapacity(): returns the maximum number of elements allowed in the current array.
	void add(double value)  As you add the value to the back of the array, you should also check update the size (i.e. the number of elements in the array).  If the new item exceeds the max size of the list, throw a runtime error...

	throw runtime_error("List Full");

	void addFront(double value): This will add an item to the front of the list.  If the new item exceeds the max size,  throw a runtime_exception.
	double get(int ndx): Gets the value stored at the specified position. Throws and out_of_range exception if the index is outside the bounds of the array.
	double getFront(): Returns the first value in the array. Throws an out_of_range exception if the array is empty.
	double getEnd(): Returns the last value in the array. Throws and out_of_range exception if the array is empty.
	int find(double needle): returns the position of needle in the list, -1 if not found
	friend std::ostream& operator<<(std::ostream& out, const Collection & c): overload the extraction operator to display the list.
*/

class Collection{

protected:
	

public:
	//constructors
	Collection();
	Collection(int size) {}

	// destructor
	~Collection() {}

	// static members
	
	// getters
	int getSize() {}
	int getCapacity {}
	double get(int ndx) {}
	double getFront() {}
	double getEnd() {}

	// setters
	
	// other methods
	void add(double value) {}
	throw runtime_error("List Full") {}
	void addFront(double value)	
	
	int find(double needle)

	// friend methods	
	friend std::ostream& operator<<(std::ostream& out, const Collection & c) {}

}

#endif
