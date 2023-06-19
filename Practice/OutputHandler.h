#pragma once
#include <string>

class OutputHandler {
public:
	OutputHandler();
	void print(std::string str...);
};