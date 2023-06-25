#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Action.h"

class Parser {
public:
	Parser() = default;
	std::shared_ptr<Action> try_parse(std::string input);
	
private:
	void preprocess(std::string& in);
};