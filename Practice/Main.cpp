#include "Game.h"

int main()
{
	std::cout << "Ascend/Descend" << std::endl << "v1.0" << std::endl;
	auto game = std::make_unique<Game>();
	game->play();
	std::cout << "Shutting down...";
}