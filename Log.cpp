#include <iostream>

#include "Log.h"

void Log::m(std::string TAG, std::string mTAG){
	m(TAG, mTAG, " ");
	//std::cout << TAG << ": " << mTAG  << std::endl;
}

void Log::m(std::string TAG, std::string mTAG, std::string message){
	std::cout << TAG << ": " << mTAG << " " << message  << std::endl;
}

// void Log::m(std::string TAG, std::string mTAG, Node * message){
	
// 	std::cout << TAG << ": " << mTAG << " " << message  << std::endl;
// }