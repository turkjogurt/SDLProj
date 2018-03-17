#pragma once
#include "SDL.h"
#include "GameEngine.h"

class GameEngine;

class Sprite
{
public:



	virtual ~Sprite();

	virtual void draw()= 0;
	
protected:
	SDL_Texture* texture;

	Sprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

	const char* filepath;
	SDL_Rect rect;
	GameEngine* gameengine;

private:

};

