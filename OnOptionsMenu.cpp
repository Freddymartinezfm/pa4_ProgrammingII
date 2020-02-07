#include <iomanip>
#include <string>
#include <iostream>
#include "OnOptionsMenu.h"

OnOptionsMenu::OnOptionsMenu() {}

OnOptionsMenu::OnOptionsMenu(std::string title, int s) : title{title}, size{s}  {}

void OnOptionsMenu::header(){
	std::cout << std::string(size, '-') << std::endl;

	std::cout
		<< std::setw(8) 
		<< std::setfill(' ')
		<< std::left <<  "EmpCode"  
		<< std::setw(15) <<  "SSN"
		<< std::setw(18) << "Last"
		<< std::setw(18) << "First"
		<< std::setw(16) << "Dept"
		<< std::setw(19) << "Role"
		<< std::setw(9) << std::right << "Salary" 
		<< std::endl;

	std::cout << std::string(size, '-') << std::endl;	
}

void OnOptionsMenu::line(int d){ 
	std::cout << std::string(d, '-') << std::endl;
}