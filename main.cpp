#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "DB.h"


int main(int argc, char** argv){
		const int  MAX_CAPACITY {23};
		std::string fileName;
		argc > 1 ? fileName = argv[1] : fileName =  "employees.txt";
		fileName = "employees.txt";
		
		std::ifstream inFile(fileName);
		if (!inFile.good())
			std::cerr << "Error opening file " << std::endl;

		

		DB db = DB();
		

		
		if (!inFile.fail()){
			std::string input;
			while (std::getline(inFile, input)){
				if (input != " "){
					db.insert(input);
				}	
			}	
		}
		inFile.close();

		db.print(std::cout);
		db.remove();
		db.remove();
		db.remove();
		db.print(std::cout);


		std::string test {"dfdf"};
		db.insert(test);


}