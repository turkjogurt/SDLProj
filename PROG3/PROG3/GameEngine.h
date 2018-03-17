#pragma once
#include "SDL.h"
#include <vector>
#include "Sprite.h"

class Sprite;

class GameEngine
{
public:
	GameEngine(const char* title, int xpos, int ypos, int width, int height);
	~GameEngine();
	void run();
	void addPlayer(const char* path);
	void add(Sprite* sprite);

	SDL_Renderer* getRen() const;

	int getMouseX();
	int getMouseY();

	void setFPS(int fps);

private: 
	SDL_Renderer *ren;
	SDL_Window *window;
	std::vector<Sprite*> sprites;

	SDL_Texture *texi;

	int mouseY;
	int mouseX;

	int FPS;
	int frameDelay;
	Uint32 frameStart;
	int frameTime;
	
};

