//
// Created by andrew on 22.06.18.
//

#include "SDL.h"
SDL::SDL();
int SDL::init();
static const char* SDL::getError();


SDL::SDL(Uint32 flag)
{
    SDL::init(flag);
}

int SDL::init(Uint32 flag)
{
    if (SDL_Init(flag) != 0) {
        std::cout << SDL::getError();
        return 1;
    }

    return 0;
}

static const char* SDL::getError()
{
    return "SDL Error occured: " + SDL_GetError() + std::endl;
}

SDL_Window SDL::createWindow(const char* title, int x, int y, int width, int height, Uint32 flag)
{
    SDL_Window *win = SDL_CreateWindow(title, x, y, width, height, flag);
    if (win == nullptr) {
        std::cout << SDL::getError();
        return 1;
    }

    return win;
}

SDL_Surface SDL::bmp()
{
    SDL_Surface *bmp = SDL_LoadBMP("../res/Lesson1/hello.bmp");
    if (bmp == nullptr){
        std::cout << "SDL_LoadBMP Error: " << SDL_GetError() << std::endl;
        return 1;
    }
}

int SDL::texture() {

}