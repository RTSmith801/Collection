#ifndef COLLECTION_H
#define COLLECTION_H

class Collection{

private:	
	int defaultSize_ = 5;
	int arraySize_ = 0; 
	

public:
	//constructors
	//Default constructor for the collection.Initializes the array to a fixed size of your choice
	Collection() {double myArray[defaultSize_]};
	Collection(int size);

	// destructor
	~Collection() {}

	// static members
	
	// getters
	int getSize();
	int getCapacity();
	double get(int ndx);
	double getFront();
	double getEnd();

	// setters
	
	// other methods
	void add(double value);
	//throw runtime_error("List Full");
	void addFront(double value);
	
	int find(double needle);

	// friend methods	
	//friend std::ostream& operator<<(std::ostream& out, const Collection & c);

}

#endif
