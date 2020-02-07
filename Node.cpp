
#include "Node.h"
#include <iostream>
#include "Log.h"
#include "Employee.h"

static std::string TAG {"Node"};

Node::Node(){
	const std::string mTAG {"Node"};
	Log::m(TAG, mTAG, " Called");
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
	emp = nullptr;
	emp = nullptr; 
}


