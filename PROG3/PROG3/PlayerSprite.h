#pragma once
#include "InteractiveSprite.h"
class PlayerSprite :
	public InteractiveSprite
{
public:
	
	static PlayerSprite* getInstance(GameEngine* ge, int x, int y, int w, int h, const char* path);

	void draw();
	void update();
	void checkCollision();
	PlayerSprite(GameEngine* ge, int x, int y, int w, int h, const char* path);

	~PlayerSprite();

protected:

private:
	//SDL_Texture* texture;
	int m_Xoffset;
	int m_Yoffset;
	

};

