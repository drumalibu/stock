#pragma once
#include "Window.h"
#include "SDL/h/SDL.h"

int main()
{
    SDL::Window* win;
    win = new SDL::Window("asdasd",200,300,300,400,SDL::Window::RESIZABLE);

    SDL::SDL sdl(SDL::SDL::INIT_EVERYTHING);

    SDL_Window* window;

    window = win->get();

    SDL_ShowWindow(window);

    SDL_Delay(9000);

    delete win, window;

    return 0;
}