#include "SDL.h"




int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("bla", 800, 600, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Renderer *ren = SDL_CreateRenderer(window, -1, 0);


	SDL_SetRenderDrawColor(ren, 0, 255, 0, 255);

	SDL_RenderClear(ren);

	SDL_RenderPresent(ren);
	SDL_Delay(3000);

	return 0;

}