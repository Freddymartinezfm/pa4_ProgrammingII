#include <string>
#include <iostream>

enum ERROR {INVALID };

class Log {
public:
	static void m(std::string, std::string);	
	static void m(std::string, std::string, std::string);
	// static void m(std::string TAG, std::string mTAG, Node * message);	
};





