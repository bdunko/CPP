#include "OutputHandler.h"
#include <iostream>
#include <cstdio>
#include <cstdarg>

OutputHandler::OutputHandler() {

}

void OutputHandler::print(std::string str, ...) {
	va_list args;
	va_start(args, str);
	std::cout << std::endl;
	std::vfprintf(stdout, str.c_str(), args);
	std::cout << std::endl;
	va_end(args);
}