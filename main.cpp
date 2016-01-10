
#include <iostream>
//#include <Ngin/Ngin.h>
#include <Ngin/libs.h>
#include <iostream>

/*
SDL_Window* window;
SDL_Renderer* renderer;
Uint32 ticks;*/

int main(int argc, char** argv)
{
    initLibs();
	std::cout << sizeof(void*) << std::endl;
/*
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("iPong", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 750, 1334, SDL_WINDOW_OPENGL);
    SDL_FillRect(SDL_GetWindowSurface(window), NULL, 0);
    SDL_UpdateWindowSurface(window);

	while (ticks < 5000)
	{
		ticks = SDL_GetTicks();
		SDL_Delay(100);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();*/
	return 0;
}



