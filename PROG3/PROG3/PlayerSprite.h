#pragma once
#include "Sprite.h"
class PlayerSprite :
	public Sprite
{
public:
	
	static PlayerSprite* getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path);

	void draw();
	void update();

	~PlayerSprite();

protected:
	PlayerSprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

private:
	SDL_Texture* texture;
	int m_Xoffset;
	int m_Yoffset;
	

};

