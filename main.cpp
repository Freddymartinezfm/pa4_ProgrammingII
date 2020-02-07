#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"


int main(int argc, char** argv){
		const int  MAX_CAPACITY {23};
		std::string fileName;
		argc > 1 ? fileName = argv[1] : fileName =  "employees.txt";
		fileName = "employees.txt";
		
		std::ifstream inFile(fileName);
		if (!inFile.good())
			std::cerr << "Error opening file " << std::endl;

		Employee* emp[MAX_CAPACITY];
		Employee onTheStack;
		Employee *onTheHeap = new Employee();


		for (int i =0; i < MAX_CAPACITY; i++) emp[i] = nullptr;
		int count = 0;
		if (!inFile.fail()){
			std::string input;
			while (std::getline(inFile, input)){
				if (input != " "){
					emp[count++] = new Employee(input);
				}	
			}	
		}
		inFile.close();

		for (int i =0; i < MAX_CAPACITY; i++){
			std::cout << "size: " << emp[i]->getEmpSize() << " ";
			emp[i]->display(std::cout);
		}

		

		onTheHeap->setFirst("==heapfirst==");
		std::cout << onTheHeap->getFirst() << std::endl;

		onTheStack.setFirst("==stackfirst==");
		std::cout << onTheStack.getFirst() << std::endl;
		
}