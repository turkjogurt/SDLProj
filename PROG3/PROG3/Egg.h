#pragma once
#include "InteractiveSprite.h"
class Egg :
	public InteractiveSprite
{
public:


	Egg(GameEngine* ge, int x, int y, int w, int h, const char* path);
	void draw();
	void update();
	void checkCollision();



	~Egg();
};

