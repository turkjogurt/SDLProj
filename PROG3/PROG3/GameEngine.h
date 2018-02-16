#pragma once
#include "SDL.h"

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

private: 

	SDL_Renderer *ren;
	SDL_Window *window;

	void run();

};

