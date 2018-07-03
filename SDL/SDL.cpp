//
// Created by andrew on 22.06.18.
//

#include "h/SDL.h"

namespace SDL_Frame
{
    int SDL::init(Uint32 InitFlag)
    {
        if (SDL_Init(InitFlag) != 0) {
            SDL::printError();
            return 1;
        }

        return 0;
    }
}