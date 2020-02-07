#include <string>
#include <iostream>

enum ERROR {INVALID };

class Log {
public:
	static void m(const std::string, const std::string);	
	static void m(const std::string, const std::string, std::string);
	static void m(const std::string TAG, const std::string mTAG, void * message);	
};





