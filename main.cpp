#pragma once

#include "SDLFrame.h"

using namespace SDL_Frame;

int main()
{
    SDL::init(SDL::INIT_EVERYTHING);

    auto* window = new Window("Title", 30, 30,300,400, Window::RESIZABLE);

    SDL_Window* winObj = window->get();

    window->show();

    SDL_Delay(3000);

    delete window, winObj;

    return 0;
}