#pragma once
#include "Sprite.h"
class InteractiveSprite :
	public Sprite
{
public:
	//static InteractiveSprite* getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path);

	virtual void checkCollision() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
	
	~InteractiveSprite();
protected:
	InteractiveSprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

};

