//
// Created by andrew on 22.06.18.
//

#ifndef STOCK_SDL_H
#define STOCK_SDL_H

#include <iostream>
#include "SDL2/SDL.h"

namespace SDL_Frame
{
    class SDL
    {
    public:
        static const Uint32 INIT_TIMER            = SDL_INIT_TIMER;
        static const Uint32 INIT_AUDIO            = SDL_INIT_AUDIO;
        static const Uint32 INIT_VIDEO            = SDL_INIT_VIDEO;
        static const Uint32 INIT_JOYSTICK         = 4;
        static const Uint32 INIT_HAPTIC           = 5;
        static const Uint32 INIT_GAMECONTROLLER   = 6;
        static const Uint32 INIT_EVENTS           = 7;
        static const Uint32 INIT_EVERYTHING       = SDL_INIT_EVERYTHING;
        static const Uint32 INIT_NOPARACHUTE      = 9;

        SDL(Uint32 InitFlag);
        int init(Uint32 InitFlag);

        SDL_Window* createWindow(const char* title, int x, int y, int width, int height, Uint32 WinFlag);

        //SDL_Renderer

        SDL_Surface bmp();
        int texture();
        void clean();

    protected:
        //static const char*
        void getError();
    };
}

#endif //STOCK_SDL_H
