#pragma once
#include "SDL.h"
#include "GameEngine.h"

class GameEngine;

class Sprite
{
public:



	virtual ~Sprite();

	virtual void draw()= 0;
	virtual void update() = 0;
protected:

	Sprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

	const char* filepath;
	SDL_Rect rect;
	GameEngine* gameengine;

private:

};

