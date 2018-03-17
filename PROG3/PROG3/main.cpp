#include "SDL.h"
#include "GameEngine.h"
#include "PlayerSprite.h"
#include "Sprite.h"
#include "BackgroundSprite.h"
#include "InteractiveSprite.h"
#include "Egg.h"

int main(int argc, char *argv[])
{
	GameEngine *game = new GameEngine("GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1080, 720);

	//InteractiveSprite* player = PlayerSprite::getInstance(game, 300, 300, 96, 96, "data/bird.png");
	BackgroundSprite* lefttree = BackgroundSprite::getInstance(game, 50, 100, 96, 512, "data/tree.png");
	InteractiveSprite* player = new PlayerSprite(game, 300, 300, 96, 96, "data/bird.png");
	InteractiveSprite* egg = new Egg(game, 400, 200, 32, 48, "data/egg.png");

	game->run();

	delete player;
	delete game;
	return 0;

}