#ifndef _DB_H_
#define _DB_H_
#include <iostream>
#include <ostream>
#include<string>
#include "Container.h"
#include "Employee.h"

class DB : public Container {
private:
	Node *frontNode;
	int size;
	void printHeader(std::ostream&);
	void printR(std::ostream&, Node *);
public:
	DB();
	~DB();
	void insert(const std::string&);
	void remove();
	void print(std::ostream&);
	friend class Node;
};
#endif