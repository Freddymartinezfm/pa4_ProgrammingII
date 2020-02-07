#include "DB.h"
#include "Log.h"
#include <iostream>
#include <iomanip>

static std::string TAG {"DB"};

DB::DB(){
	std::string mTAG {"DB() is called"};
	Log::m(TAG, mTAG, this);
	frontNode = nullptr;
	size = 0;
}

void DB::insert(const std::string& entry){
	
	frontNode = new Node(entry, this->frontNode);

	
}

void DB::print(std::ostream& os){
	while (frontNode != nullptr){
		frontNode->emp->display(os);
		frontNode = frontNode->next;
	}
}