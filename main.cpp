#include "SDL/SDL.h"

using namespace SDL_Frame;

int main()
{
    //SDL sdl(SDL_INIT_EVERYTHING);
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* MyWindow;
    //MyWindow = sdl.createWindow("privet",400,500,700,700,SDL_WINDOW_SHOWN);
    MyWindow = SDL_CreateWindow("privet",400,300,800,500,SDL_WINDOW_SHOWN);
    SDL_Delay(3000);
    SDL_DestroyWindow(MyWindow);
    return 0;
}