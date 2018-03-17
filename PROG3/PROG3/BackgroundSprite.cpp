#include "BackgroundSprite.h"
#include "SDL_image.h"	



BackgroundSprite::BackgroundSprite(GameEngine* ge, int x, int y, int w, int h, const char* path) : Sprite(ge, x, y, w, h, path)
{
	texture = IMG_LoadTexture(gameengine->getRen(), path);
}

BackgroundSprite* BackgroundSprite::getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path)
{
	return new BackgroundSprite(ge, x, y, w, h, path);
}


BackgroundSprite::~BackgroundSprite()
{
	SDL_DestroyTexture(texture);
}

void BackgroundSprite::draw()
{
	SDL_RenderCopy(gameengine->getRen(), texture, NULL, &rect);

}

void BackgroundSprite::update()
{
}
