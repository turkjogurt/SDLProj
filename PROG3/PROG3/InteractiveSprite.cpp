#include "InteractiveSprite.h"


InteractiveSprite::InteractiveSprite(GameEngine* ge, int x, int y, int w, int h, const char* path) : Sprite(ge, x, y, w, h, path)
{
	ge->addInteractiveSprite(this);
}


InteractiveSprite::~InteractiveSprite()
{
}

//InteractiveSprite* InteractiveSprite::getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path)
//{
//	return new InteractiveSprite(ge, x, y, w, h, path);
//}




