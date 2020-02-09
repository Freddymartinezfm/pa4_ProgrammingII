#include "DB.h"
#include "Employee.h"
#include "Log.h"
#include <iostream>
#include <iomanip>
#include <cassert>

const static std::string TAG {"DB"};
const int headerSize = 103;

DB::DB(){
	const std::string mTAG {"DB()"};
	Log::m(TAG, mTAG, this);
	frontNode = nullptr;
	size = 0;
}

void DB::insert(const std::string& entry){
	/*
	*	Pre: The user has created a DB object
	*	Post: A Employee is added to a the data structure 
	*	Uses: Node() constructor 
	*/
	frontNode = new Node(entry, this->frontNode);
	size++;
}

void DB::printHeader(std::ostream & os){
	os <<
	std::string(headerSize, '-') << std::endl;

	std::cout
		<< std::setw(8) 
		<< std::setfill(' ')
		<< std::left <<  "EmpCode"  
		<< std::setw(15) <<  "SSN"
		<< std::setw(18) << "Last"
		<< std::setw(18) << "First"
		<< std::setw(16) << "Dept"
		<< std::setw(19) << "Role"
		<< std::setw(9) << std::right << "Salary" 
		<< std::endl;

	std::cout << std::string(headerSize, '-') << std::endl;
		

}

void DB::remove (){
	/*
	*	Pre: The user has created a DB object with one or more employees
	*	Post: The Employee is removed from the data structure, if the data structure is empty, it will simply return 
	*	Uses: ~Node() destructor 
	*/
	const std::string mTAG {"remove()"};
	Log::m(TAG, mTAG, this);
	
	assert(frontNode != nullptr) , "Error";
	Node *to_delete = frontNode;
	frontNode = frontNode->next;
	delete to_delete;
	size--;
}

void DB::print(std::ostream& os){
	/*
	*	Pre: The user has created a DB object with one or more Employees
	*	Post: The employees are printed to the user in a readable format. If the list is empty it will simply return
	*	Uses: printHeader() and EMployee::Display() 
	*	
	*/
	
	
	bool keepGoing = true;
	Node *t = frontNode;
	printHeader(std::cout);
	while (frontNode != nullptr && keepGoing){
		t->emp->display(os);
		if (t->next == nullptr) keepGoing = false;
			t = t->next;
	}
	std::cout << std::string(headerSize, '-') << std::endl;
	//printR(os, frontNode);
}

void DB::printR(std::ostream& os, Node* frontNode){
	Node * t = frontNode;
	if (frontNode != nullptr){
		printR(os, t->next);
		t->emp->display(os);
	}
}

DB::~DB(){
	const std::string mTAG {"~DB()"};
	bool keepGoing = true;
	Log::m(TAG, mTAG, this);
	while (frontNode != nullptr && keepGoing){
		Node *to_delete = frontNode;
		if (frontNode->next == nullptr) keepGoing = false;
		frontNode = frontNode->next;
		delete to_delete;
		to_delete = nullptr;
	} 
}