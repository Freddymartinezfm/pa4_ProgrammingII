#include "DB.h"
#include "Log.h"
#include <iostream>
#include <iomanip>
#include "OnOptionsMenu.h"

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
	OnOptionsMenu menu{"PA4", 103};
	menu.header();
	while (frontNode != nullptr && keepGoing){
		t->emp->display(os);
		if (t->next == nullptr) keepGoing = false;
		t = t->next;
	}
	menu.line(103);
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