
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
	emp = new Employee(entry);
	this->next = frontNode;
}


