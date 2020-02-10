#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "DB.h"
#include "DBManager.h"


int main(int argc, char** argv){
		const int  MAX_CAPACITY {23};
		std::string fileName;
		argc > 1 ? fileName = argv[1] : fileName =  "employees.txt";
		
		std::ifstream inFile(fileName);
		if (!inFile.good())
			std::cerr << "Error opening file " << std::endl;

		DB db = DB();


		
		if (!inFile.fail()){
			std::string input;
			while (std::getline(inFile, input) && input != " ")
					db.insert(input);	
		}

		inFile.close();

		std::cout << "After reading file: " << std::endl;
		db.print(std::cout);


		for (int i = 0; i < 3; i++) db.remove();

		std::cout << "After removing from file: " << std::endl;
		db.print(std::cout);
}