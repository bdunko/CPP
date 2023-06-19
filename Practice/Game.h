#pragma once
#include "InputHandler.h"
#include "OutputHandler.h"
#include "Player.h"
#include "Parser.h"

class Game
{
public:
	Game();
	void play();
private:
	std::unique_ptr<InputHandler> m_in;
	std::unique_ptr<OutputHandler> m_out;
	std::unique_ptr<Parser> m_parser;

	std::unique_ptr<Player> m_player;
};