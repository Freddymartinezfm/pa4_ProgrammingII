#include "DB.h"
#include "Log.h"
#include <iostream>
#include <iomanip>

static std::string TAG {"DB"};

DB::DB(){
	std::string mTAG {"DB() is called"};
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

void DB::print(std::ostream& os){
	bool keepGoing = true;
	Node *t = frontNode;
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