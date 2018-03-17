#include "Egg.h"



Egg::Egg(GameEngine* ge, int x, int y, int w, int h, const char* path) : InteractiveSprite(ge, x, y, w, h, path)
{
}

void Egg::draw()
{
	SDL_RenderCopy(gameengine->getRen(), texture, NULL, &rect);
}

void Egg::update()
{
}

void Egg::checkCollision()
{
}


Egg::~Egg()
{
}
