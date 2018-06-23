//
// Created by andrew on 22.06.18.
//

#ifndef STOCK_SDL_H
#define STOCK_SDL_H

#include <SDL2/SDL.h>

namespace SDL_Frame
{
    class SDL
    {
    public:
        static const char* INIT_TIMER            = "SDL_INIT_TIMER";
        static const char* INIT_AUDIO            = "SDL_INIT_AUDIO";
        static const char* INIT_VIDEO            = "SDL_INIT_VIDEO";
        static const char* INIT_JOYSTICK         = "SDL_INIT_JOYSTICK";
        static const char* INIT_HAPTIC           = "SDL_INIT_HAPTIC";
        static const char* INIT_GAMECONTROLLER   = "SDL_INIT_GAMECONTROLLER";
        static const char* INIT_EVENTS           = "SDL_INIT_EVENTS";
        static const char* INIT_EVERYTHING       = "SDL_INIT_EVERYTHING";
        static const char* INIT_NOPARACHUTE      = "SDL_INIT_NOPARACHUTE";

        SDL(Uint32 flag);
        int init(Uint32 flag);

        SDL_Window createWindow(const char* title, int x, int y, int width, int height, Uint32 flag);

        //SDL_Renderer

        SDL_Surface bmp();
        int texture();
        void clean();

    protected:
        static const char* getError();
    };
}

#endif //STOCK_SDL_H
