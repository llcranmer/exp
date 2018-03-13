#include <iostream>

// Use the terminal to do the following:
// to compile: $ g++ -std=c++11 *linkedList.cpp -o linkedList
// to execute: $ ./linkedList


struct Node {
	std::string name; // Add as many data fields as needed 
	std::string type;
	// e.g. int age,  salary, etc.;
	Node *next; // a pointer or link to the next node.
}; // end of Node

class linkedList {

	public:
		// Default, inline defined constructor that sets the beginning and end of the L.List to Null to avoid junk values.
		linkedList(){head = NULL;tail = NULL;}
	
	void createNode(std::string name, std::string type);
 	
	void insertStart(std::string name, std::string type); 

	void insertEnd(std::string name, std::string type); 

	void insertPosition(int position,std::string name, std::string type); 

	void print();
	
	private:
		Node *head, *tail;

}; // end of linkedList 

//---------------function prototypes-------------------------
// aka  "*.h" files 


int main(){
 
 linkedList pokemon;
 pokemon.createNode("Pikachu", "electric");
 pokemon.createNode("Charmander","fire");
 pokemon.createNode("Squirtle", "water");
 pokemon.createNode("Bulbasaur","grass");
 pokemon.print();
 pokemon.insertStart("Ivysaur", "grass");
 pokemon.insertEnd("Charizard", "fire");
 pokemon.insertPosition(1, "mew", "psychic");
 pokemon.print();
 return 0; 
}

//---------------function definitions-----------------------
// aka the "*.cpp" files 

void linkedList::createNode(std::string name, std::string type) {
	
	// Create a new node that is not connected to the linked list.
	Node *temp = new Node; // temp->[new Node] ->
	temp->name = name; // [name] ->
	temp->type = type; // [name|type] ->
	temp->next = NULL; // [name|type] -> NULL

	// Case 1: Empty List := If there is only one Node in existence--the head node
	if (head == NULL) {
		// link/point it to the new Node
		head = temp; // [head] -> [name|type] -> 
		// Now, temp is the new tail
		tail = temp; // [head] -> [tail] -> [name|type] -> NULL
		temp = NULL; 
		
	} else {
	// Case 2: Non-empty list
		tail->next = temp; // making sure the tail points to null [tail] -> NULL
		tail = temp; // copy info from temp into the tail [name | type] -> NULL

	}

}

void linkedList::print(){

	// Create a temporary node to store the contents to be printed
	Node *temp = new Node; 
	temp = head; 

	// walk from the beginning of the list to the end of the list.
	std::cout <<"Current Pokemon";
	while(temp!=NULL){
		std::cout <<"["<<temp->name <<"|"<< temp->type <<"]" << "->"; 
		temp = temp->next; // walk to the next node
	}

	std::cout << " NULL " << '\n';
}

void linkedList::insertStart(std::string name, std::string type){
	
	Node *temp = new Node; 
	temp->name = name; 
	temp->type = type; 

	// making temp the new head
	temp->next = head;
	// copying the contents of temp into head 
	head = temp; 
}

void linkedList::insertEnd(std::string name, std::string type) { 
	
	Node *temp = new Node; 
	temp->name = name; 
	temp->type = type; 
	temp->next = NULL; 
	
	if(head == NULL){

		head = temp;
		tail = temp; 
		temp = NULL; 

	} else {

		tail->next = temp; 
		tail = temp; 	
	}
}

void linkedList::insertPosition(int position, std::string name, std::string type ){
	
	Node *temp = new Node; 
	Node *prev = new Node; 
	Node *curr = new Node;
	curr = head; 

	for(int i = 0; i < position; ++i){
		prev = curr; 
		curr = curr->next;

	}
	
	temp->name = name; 
	temp->type = type; 
	prev->next = temp; 
	temp->next = curr; 

}


