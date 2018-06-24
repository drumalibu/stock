//
// Created by andrew on 22.06.18.
//

#ifndef STOCK_SDL_H
#define STOCK_SDL_H

#include "SDL2/SDL.h"

namespace SDL_Frame
{
    class SDL
    {
    public:
        //static const uint32_t INIT_TIMER            = 1;
        //static const uint32_t INIT_AUDIO            = 2;
        //static const uint32_t INIT_VIDEO            = 3;
        //static const uint32_t INIT_JOYSTICK         = 4;
        //static const uint32_t INIT_HAPTIC           = 5;
        //static const uint32_t INIT_GAMECONTROLLER   = 6;
        //static const uint32_t INIT_EVENTS           = 7;
        //static const uint32_t INIT_EVERYTHING       = 8;
        //static const uint32_t INIT_NOPARACHUTE      = 9;

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
