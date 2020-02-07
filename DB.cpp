#include "DB.h"

#include <iostream>
#include <iomanip>

DB::DB(){
	frontNode = nullptr;
}

void DB::insert(const std::string& entry){
	if (frontNode == nullptr) {
	frontNode = new Node(entry, this->frontNode);

	

	} else {
		frontNode = new Node(entry, this->frontNode);

	}
}

void DB::print(std::ostream& os){

	// std::iterator it = frontNode->begin();

	while (frontNode->next != nullptr){
		frontNode->emp->display(os);
		frontNode = frontNode->next;

	}

	


}