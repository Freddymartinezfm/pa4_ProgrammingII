#include <iostream>
#include <iomanip>
#include "Log.h"

void Log::m(std::string TAG, std::string mTAG){
	m(TAG, TAG, mTAG);
}

void Log::m(std::string TAG, std::string mTAG, std::string message){
	m(TAG, mTAG, message);
}

void Log::m(std::string TAG, std::string mTAG, void * message){
	std::cout << std::left << std::setw(15) <<  TAG << ": " << std::setw(20)  << mTAG <<  std::setw(28)  << std::left <<  message  << std::endl;
}