#ifndef _DB_H_
#define _DB_H_
#include <iostream>
#include <ostream>
#include<string>
#include "Container.h"
#include "Employee.h"

class DB : public Container {
private:
	Node *frontNode; //root
	
	int size;
	void printHeader(std::ostream&);
public:
	DB();
	~DB();
	virtual void insert(const std::string&);
	void remove();
	void print(std::ostream&);

	
	friend class Node;
};
#endif