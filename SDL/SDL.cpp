//
// Created by andrew on 22.06.18.
//

#include "h/SDL.h"

namespace SDL
{
    SDL::SDL(Uint32 InitFlag = SDL::INIT_EVERYTHING)
    {
        SDL::init(InitFlag);
    }

    int SDL::init(Uint32 InitFlag)
    {
        if (SDL_Init(InitFlag) != 0) {
            this->printError();
            return 1;
        }

        return 0;
    }
}