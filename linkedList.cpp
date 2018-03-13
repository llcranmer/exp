#include <iostream>

// Note: To compile this code use g++ -std=c++11 *linkedList.cpp -o linkedList
// To execute use './linkedList'

struct Node {
	std::string name; // Add as many data fields as needed 
	// e.g. int age,  salary, etc.;
	Node *next; // a pointer or link to the next node.
}; // end of Node struct 

class linkedList {

	public:
		// Default, inline defined constructor that sets the beginning and end of the L.List to Null to avoid junk values.
		linkedList(){head = NULL;tail = NULL;}

	private:
		Node *head, *tail;

};

int main(){
 
 return 0; 
}















