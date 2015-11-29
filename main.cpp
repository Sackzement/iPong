
#include <iostream>
#include <SDL/SDL.h>


SDL_Window* window;
SDL_Renderer* renderer;
Uint32 time;

int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("iPong", 100, 100, 750, 1334, SDL_WINDOW_SHOWN);

	while (time < 3000)
	{
		time = SDL_GetTicks();
		SDL_Delay(500);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}