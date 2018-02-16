#include "GameEngine.h"
#include "SDL.h"


GameEngine::GameEngine()
{

	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("Super Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_SHOWN);
	ren = SDL_CreateRenderer(window, -1, 0);


	SDL_SetRenderDrawColor(ren, 0, 255, 0, 255);



	run();

}


GameEngine::~GameEngine()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(ren);
	SDL_Quit();

}

void GameEngine::run()
{
	bool goOn = true;
	while (goOn) {
		SDL_Event eve;
		while (SDL_PollEvent(&eve)) {
			switch (eve.type) {
			case SDL_QUIT:
				goOn = false;
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
		
		SDL_RenderPresent(ren);

	}

}