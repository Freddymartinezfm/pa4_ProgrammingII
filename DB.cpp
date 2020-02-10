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
	const std::string mTAG {"remove()"};
	Log::m(TAG, mTAG, this);
	
	assert(frontNode != nullptr) , "Error";
	Node *to_delete = frontNode;
	frontNode = frontNode->next;
	delete to_delete;
	size--;
}

void DB::print(std::ostream& os){
	bool keepGoing = true;
	Node *t = frontNode;
	printHeader(std::cout);
	while (frontNode != nullptr && keepGoing){
		t->emp->display(os);
		if (t->next == nullptr) keepGoing = false;
			t = t->next;
	}
	std::cout << std::string(headerSize, '-') << std::endl;
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


void DB::searchAndInsert(const std::string& entry){
	// create node from entry
	// if list is empty
		// insert node and set to front
	// otherwise  while list is not empty 
		// compare node with first element in list
				// if data in list is smaller
					// move to next node and compare until entry is 		larger than or reached the end of list
				// else if data equals entry
					// return duplicate 
				// else  insert entry in between two nodes
				

}