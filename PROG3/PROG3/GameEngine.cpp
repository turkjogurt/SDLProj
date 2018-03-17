#include "GameEngine.h"
#include "SDL.h"
#include "Sprite.h"
#include "SDL_image.h"
#include <iostream>
#include "InteractiveSprite.h"
#include "BackgroundSprite.h"

GameEngine::GameEngine(const char* title, int xpos, int ypos, int width, int height)
{

	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow(title, xpos, ypos, width, height, SDL_WINDOW_SHOWN);
	ren = SDL_CreateRenderer(window, -1, 0);

	if (ren)
	{
		SDL_SetRenderDrawColor(ren, 255, 255, 150, 255);

	}
	SDL_Rect hela = { xpos,ypos,width,height };
	SDL_RenderFillRect(ren, &hela);

	SDL_SetWindowGrab(window, SDL_TRUE);

	FPS = 60;
	frameDelay = 1000 / FPS;

}


GameEngine::~GameEngine()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(ren);
	SDL_Quit();

}

void GameEngine::run()
{

	SDL_RenderClear(ren);


	SDL_RenderPresent(ren);

	bool goOn = true;
	while (goOn) {
		frameStart = SDL_GetTicks();


		SDL_Event eve;
		while (SDL_PollEvent(&eve)) {
			switch (eve.type) {
			case SDL_QUIT:
				goOn = false;
				break;

			case SDL_MOUSEMOTION:
				mouseX = eve.motion.x;
				mouseY = eve.motion.y;

				
				//std::cout << "X: " << mouseX << " Y: " << mouseY << std::endl;

				
				break;

			case SDL_KEYDOWN:

				switch (eve.key.keysym.sym)
				{
				case SDLK_ESCAPE:
					SDL_Quit();
					goOn = false;
					break;
				
				
				default:
					break;
				}

				break;
				
		
			} 
		} 

		SDL_RenderClear(ren);
		
		for (BackgroundSprite* bs : b_sprites)
		{
			bs->draw();
		}

		for (InteractiveSprite* is : i_sprites)
		{
			is->update();
			is->draw();
			is->checkCollision();
		}

		
		SDL_RenderPresent(ren);

		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime)
		{
			SDL_Delay(frameDelay - frameTime);

		}
	}

}

void GameEngine::addInteractiveSprite(InteractiveSprite* i_sprite)
{
	i_sprites.push_back(i_sprite);
}

void GameEngine::addBackgroundSprite(BackgroundSprite* b_sprite)
{
	b_sprites.push_back(b_sprite);
}

SDL_Renderer* GameEngine::getRen() const
{
	return ren;
}

int GameEngine::getMouseX()
{
	return mouseX;
}

int GameEngine::getMouseY()
{
	return mouseY;
}

void GameEngine::setFPS(int fps)
{
	FPS = fps;
	frameDelay = 1000 / FPS;
}