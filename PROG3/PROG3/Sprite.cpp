#include "Sprite.h"
#include "SDL_Image.h"


Sprite::Sprite(GameEngine* ge, int x, int y, int w, int h, const char* path) : gameengine(ge), rect{x,y,w,h}, filepath(path)
{

	ge->add(this);
	
}


Sprite::~Sprite()
{
}