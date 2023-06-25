#include "Action.h"
#include <cassert>

Action::Verb Action::get_verb()
{
	return m_verb;
}

std::string Action::get_arg(int i)
{
	if (m_args.size() <= i)
		return "ERROR";
	return m_args[i];
}