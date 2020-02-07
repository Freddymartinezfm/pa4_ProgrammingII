#include <iostream>
#include <iomanip>
#include "Log.h"

// void Log::m(std::string TAG, std::string mTAG){
// 	m(TAG, mTAG);
// }

// void Log::m(const std::string TAG, const std::string mTAG, std::string message){
// 	std::cout << std::left << std::setw(15) <<  TAG 
// 	<< ": " << std::setw(15)  << mTAG 
// 	<<  std::setw(15)  << std::right <<  message  << std::endl;
// }

void Log::m(const std::string TAG, const std::string mTAG, void * message){
	std::cout << std::left << std::setw(15) <<  TAG 
	<< ": " << std::setw(20)  << mTAG 
	<<  std::setw(15)  << std::right <<  message  << std::endl;
}