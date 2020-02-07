#ifndef _NODE_H_
#define _NODE_H_

#include "Employee.h"
#include <string>
#include "Node.h"

class Employee;

class Node {
private:
	Employee *emp;
	Node *next;
public:
	Node();
	Node(const std::string &, Node *);
	~Node();
	friend class DB;
};

#endif