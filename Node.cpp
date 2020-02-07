
#include "Node.h"
#include <iostream>
#include "Log.h"
#include "Employee.h"

static std::string TAG {"Node"};

Node::Node(){
	const std::string mTAG {"Node"};
	Log::m(TAG, mTAG);
	emp = nullptr;
	next = nullptr;
}

Node::Node(const std::string & entry, Node *frontNode){
	std::string mTAG {"Node(string, Node*)"};
	Log::m(TAG, mTAG, this);
	emp = new Employee(entry);
	this->next = frontNode;
	frontNode = this;
}

Node::~Node(){
	const std::string mTAG {"~Node()"};
	Log::m(TAG, mTAG, this);
	delete emp, next;
	// delete next;
	emp = nullptr;
	emp = nullptr; 
}


