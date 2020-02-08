
#include "Node.h"
#include <iostream>
#include "Log.h"
#include "Employee.h"

const static std::string TAG {"Node"};

Node::Node(){
	const std::string mTAG {"Node()"};
	Log::m(TAG, mTAG, this);
	emp = nullptr;
	next = nullptr;
}

Node::Node(const std::string & entry, Node *nextNode){
	const std::string mTAG {"Node(string, Node*)"};
	Log::m(TAG, mTAG, this);
	emp = new Employee(entry);
	this->next = nextNode;
	
}

Node::~Node(){
	std::cout << "destructor started" << std::endl;
	const std::string mTAG {"~Node()"};
	Log::m(TAG, mTAG, this);

	
	delete emp;
	emp = nullptr;
}


