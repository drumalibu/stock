//
// Created by andrew on 22.06.18.
//

#ifndef STOCK_SDL_H
#define STOCK_SDL_H

#include <iostream>
#include "AbstractEntity.h"

namespace SDL_Frame
{
    class SDL : public AbstractEntity
    {
    public:
        // Init Flags
        static const Uint32 INIT_TIMER            = SDL_INIT_TIMER;
        static const Uint32 INIT_AUDIO            = SDL_INIT_AUDIO;
        static const Uint32 INIT_VIDEO            = SDL_INIT_VIDEO;
        static const Uint32 INIT_JOYSTICK         = SDL_INIT_JOYSTICK;
        static const Uint32 INIT_HAPTIC           = SDL_INIT_HAPTIC;
        static const Uint32 INIT_GAMECONTROLLER   = SDL_INIT_GAMECONTROLLER;
        static const Uint32 INIT_EVENTS           = SDL_INIT_EVENTS;
        static const Uint32 INIT_EVERYTHING       = SDL_INIT_EVERYTHING;
        static const Uint32 INIT_NOPARACHUTE      = SDL_INIT_NOPARACHUTE;

        static int init(Uint32 InitFlag);
    };
}

#endif //STOCK_SDL_H
