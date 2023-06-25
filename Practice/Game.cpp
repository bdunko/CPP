#include "Game.h"

Game::Game()
{
	m_in = std::make_unique<InputHandler>();
	m_out = std::make_unique<OutputHandler>();
	m_parser = std::make_unique<Parser>();

	m_player = std::make_unique<Player>();
}

void Game::play()
{
	bool quit = false;
	while(!quit) {
		// dungeon takes a turn
		// out->print(dungeon->timestep())
		
		// get input from player, try to parse into an action
		std::shared_ptr<Action> parsed;
		while (!(parsed = m_parser->try_parse(m_in->get_line())))
			m_out->print("Invalid input. (Try 'help'?)");

		// handle the parsed input
		if (parsed->get_verb() == Action::Verb::QUIT)
		{
			quit = true;
		}
		else if (parsed->get_verb() == Action::Verb::HELP)
		{
			//TODO HELP
		}
		else
		{
			//TODO
		}
	} 
}