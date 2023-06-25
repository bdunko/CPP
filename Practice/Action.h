#pragma once

#include <vector>
#include <string>

class Action {
public:
	enum Verb {
		ASCEND,
		DESCEND,
		HELP,
		INVENTORY,
		FIGHT,
		QUIT,

		EXAMINE,
		
		USE,
		
		CAST
	};

	Action(Verb verb, std::vector<std::string> args) :
		m_verb(verb), m_args(args) {};

	Action::Verb get_verb();
	std::string get_arg(int i);

private:
	Verb m_verb;
	std::vector<std::string> m_args;
};