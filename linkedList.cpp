#include <iostream>

// Use the terminal to do the following:
// to compile: $ g++ -std=c++11 *linkedList.cpp -o linkedList
// to execute: $ ./linkedList


struct Node {
	std::string name; // Add as many data fields as needed 
	// e.g. int age,  salary, etc.;
	Node *next; // a pointer or link to the next node.
}; // end of Node

class linkedList {

	public:
		// Default, inline defined constructor that sets the beginning and end of the L.List to Null to avoid junk values.
		linkedList(){head = NULL;tail = NULL;}
	
	void createNode(std::string name);

	private:
		Node *head, *tail;

}; // end of linkedList 

//---------------function prototypes-------------------------
// aka  "*.h" files 


int main(){
 
 linkedList students;
 students.createNode("Adam");
 return 0; 
}

//---------------function definitions-----------------------
// aka the "*.cpp" files 

void linkedList::createNode(std::string name) {
	
	std::cout << "creating Node..." << std::endl;

}











