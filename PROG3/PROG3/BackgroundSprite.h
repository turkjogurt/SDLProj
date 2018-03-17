#pragma once
#include "Sprite.h"
class BackgroundSprite :
	public Sprite
{
public:
	static BackgroundSprite* getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path);


	~BackgroundSprite();

	void draw();
	void update();

protected:
	BackgroundSprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

private:
	SDL_Texture* texture;

};

