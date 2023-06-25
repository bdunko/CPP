#include "Parser.h"
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <memory>


std::shared_ptr<Action> Parser::try_parse(std::string input)
{
	preprocess(input);

	std::vector<std::string> split;
	boost::split(split, input, boost::is_any_of(" "));

	if (split.size() == 0)
		return nullptr;

	// check the first value for verb
	const std::string sverb = split[0];
	Action::Verb verb;

	if (sverb == "ascend" || sverb == "a")
		verb = Action::Verb::ASCEND;
	else if (sverb == "descend" || sverb == "d")
		verb = Action::Verb::DESCEND;
	else if (sverb == "help" || sverb == "h")
		verb = Action::Verb::HELP;
	else if (sverb == "inventory" || sverb == "i")
		verb = Action::Verb::INVENTORY;
	else if (sverb == "fight" || sverb == "f")
		verb = Action::Verb::FIGHT;
	else if (sverb == "quit" || sverb == "q")
		verb = Action::Verb::QUIT;
	else if (sverb == "examine" || sverb == "e")
		verb = Action::Verb::EXAMINE;
	else if (sverb == "use" || sverb == "u")
		verb = Action::Verb::USE;
	else if (sverb == "WORDS") //todo
		verb = Action::Verb::CAST;
	else
		return nullptr;

	// store rest as arguments
	std::vector<std::string> args;
	for (int i = 1; i < split.size(); i++)
		args.push_back(split[i]);
	
	return std::make_shared<Action>(verb, args);
}

void Parser::preprocess(std::string& in)
{
	boost::trim(in);
	boost::to_lower(in);
	std::cout << "Preprocessed to " << in << std::endl;
}