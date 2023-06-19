#include "InputHandler.h"

InputHandler::InputHandler() {

}

std::string InputHandler::get_line() {
	std::cout << "> ";
	std::string input;
	std::getline(std::cin, input);
	return input;
}