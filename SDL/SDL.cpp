//
// Created by andrew on 22.06.18.
//

#include "SDL.h"

using namespace SDL_Frame;

SDL::SDL(Uint32 InitFlag)
{
    SDL::init(InitFlag);
}

int SDL::init(Uint32 InitFlag)
{
    if (SDL_Init(InitFlag) != 0) {
        //std::cout <<
        SDL::getError();
        return 1;
    }

    return 0;
}

//static const char*
void SDL::getError()
{
    std::cout << "SDL Error occurred: " << SDL_GetError() << std::endl;
    //return "SDL Error occurred: " + SDL_GetError() + std::endl;
}

SDL_Window* SDL::createWindow(const char* title, int x, int y, int width, int height, Uint32 WinFlag)
{
    SDL_Window *win = SDL_CreateWindow(title, x, y, width, height, WinFlag);
    if (win == nullptr) {
        //std::cout <<
        SDL::getError();
        //return 1;
        exit(1);
    }

    return win;
}

SDL_Surface SDL::bmp()
{
    SDL_Surface *bmp = SDL_LoadBMP("../res/Lesson1/hello.bmp");
    if (bmp == nullptr){
        std::cout << "SDL_LoadBMP Error: " << SDL_GetError() << std::endl;
        //return 1;
        exit(1);
    }
    return *bmp;
}

int SDL::texture() {

}