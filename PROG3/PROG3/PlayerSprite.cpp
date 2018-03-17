#include "PlayerSprite.h"
#include "SDL_image.h"	
#include <iostream>




PlayerSprite::PlayerSprite(GameEngine* ge, int x, int y, int w, int h, const char* path) : Sprite(ge, x,y,w,h,path)
{
	texture = IMG_LoadTexture(gameengine->getRen(), path);
	/*SDL_Surface* tmpSurface = IMG_Load(path);
	texture = SDL_CreateTextureFromSurface(gameengine->getRen(), tmpSurface);
	SDL_FreeSurface(tmpSurface);*/
	m_Xoffset = w / 2;
	m_Yoffset = h / 2;
	
}

PlayerSprite* PlayerSprite::getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path)
{
	return new PlayerSprite(ge, x, y, w, h, path);
}

PlayerSprite::~PlayerSprite()
{
	SDL_DestroyTexture(texture);
}


void PlayerSprite::draw()
{
	SDL_RenderCopy(gameengine->getRen(), texture, NULL, &rect);
	//std::cout << "File Could Not Be Opened: StageLayout.txt :(" << std::endl;

}

void PlayerSprite::update()
{
	rect.x = gameengine->getMouseX() - m_Xoffset;
	rect.y = gameengine->getMouseY() - m_Yoffset;
	
}
