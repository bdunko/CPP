#pragma once
#include <string>
#include <memory>
#include "Action.h"

class Parser {
public:
	Parser() = default;
	std::shared_ptr<Action> try_parse(std::string input /* player, room */);
	
private:
	void preprocess(std::string& in);

	void ltrim(std::string& in);
	void rtrim(std::string& in);
	void trim(std::string& in);
	void lower(std::string& in);
};