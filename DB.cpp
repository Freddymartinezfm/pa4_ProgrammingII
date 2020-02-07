#include "DB.h"
#include "Log.h"
#include <iostream>
#include <iomanip>

const static std::string TAG {"DB"};

DB::DB(){
	const std::string mTAG {"DB()"};
	Log::m(TAG, mTAG, this);
	frontNode = nullptr;
	size = 0;
}

void DB::insert(const std::string& entry){
	if (frontNode == nullptr){
		frontNode = new Node(entry, this->frontNode); // empty
		this->frontNode = frontNode;
	} else {
		frontNode = new Node(entry, this->frontNode);
	}
	size++;
}

void DB::printHeader(std::ostream & os){
	int headerSize = 103;
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
	const std::string mTAG {"remove"};
	// Log::m(TAG, mTAG, this);

	if (!frontNode) return;
	else {

		if (frontNode->next != nullptr){
			Node *to_delete = frontNode;
			frontNode = frontNode->next;
			Log::m(TAG, mTAG, this);
			to_delete->next = nullptr;
			delete to_delete;
			to_delete = nullptr;
			size--;

		}
			
	}

	



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