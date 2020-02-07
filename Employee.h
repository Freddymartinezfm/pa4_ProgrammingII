#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
#include <iostream>
#include <ostream>
#include "Node.h"


class Employee {
private:
	std::string code;
	std::string ssn;
	char* first;
	char* last;
	std::string department;
	std::string role;
	double salary;
	static int size; 
	void parse(int, std::string); 
	
public:
	Employee(); 
	Employee(const std::string); 
	~Employee();
	Employee(const Employee&);

	static int getEmpSize(); //return the number of all the employee objects

	std::string getFirst() const;
	void setFirst(std::string);

	std::string getLast() const;
	void setLast(std::string);
	
	std::string getCode() const;
	void setCode(std::string);

	std::string getSSN() const;
	void setSSN(std::string);

	std::string getDept() const;
	void setDept(std::string);

	std::string getRole() const;
	void setRole(std::string);

	double getSalary() const;
	void setSalary(double) ;


	void display(std::ostream&) ; //display the information of the employee
	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
};

#endif