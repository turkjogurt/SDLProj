#include "SDL.h"
#include "GameEngine.h"
#include "PlayerSprite.h"
#include "Sprite.h"
#include "BackgroundSprite.h"


int main(int argc, char *argv[])
{
	GameEngine *game = new GameEngine("GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1080, 720);

	Sprite* player = PlayerSprite::getInstance(game, 300, 300, 96, 96, "data/bird.png");
	Sprite* lefttree = BackgroundSprite::getInstance(game, 50, 100, 96, 512, "data/tree.png");

	game->run();

	delete player;
	delete game;
	return 0;

}