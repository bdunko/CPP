#include "Parser.h"
#include <iostream>
#include <memory>
#include <algorithm>

std::shared_ptr<Action> Parser::try_parse(std::string input)
{
	preprocess(input);

	if(input == "ascend")
		return std::make_shared<Action>(Action::Type::ASCEND);
	
	return nullptr;
}

void Parser::preprocess(std::string& in)
{
	trim(in);
	lower(in);
	std::cout << "Preprocessed to " << in << std::endl;
}

void Parser::ltrim(std::string& in)
{
	in.erase(in.begin(), std::find_if(in.begin(), in.end(), [](unsigned char ch) {
		return !std::isspace(ch);
		}));
}

void Parser::rtrim(std::string& in)
{
	in.erase(std::find_if(in.rbegin(), in.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
		}).base(), in.end());
}

void Parser::trim(std::string& in)
{
	ltrim(in);
	rtrim(in);
}

void Parser::lower(std::string& in)
{
	std::transform(in.begin(), in.end(), in.begin(),
		[](unsigned char c) { return std::tolower(c); });
}