#ifndef _DB_H_
#define _DB_H_
#include "Node.h"
#include <iostream>
#include <ostream>
#include<string>

class DB {
private:
	Node *frontNode;
	int size;
	void printHeader(std::ostream&);
public:
	DB();
	~DB();
	void insert(const std::string&);
	void remove();
	void print(std::ostream&);
};
#endif