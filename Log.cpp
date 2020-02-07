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
	std::cout << std::left << std::setw(10) <<  TAG << ": " << std::setw(15)  << mTAG <<  std::setw(20)  << std::right <<  message  << std::endl;
}