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

    SDL_Texture* SDL::texture(SDL_Renderer* renderer, SDL_Surface* surface, bool memFree)
    {
        SDL_Texture *tex = SDL_CreateTextureFromSurface(renderer, surface);

        if (memFree) {
            SDL_FreeSurface(surface);
        }

        if (tex == nullptr){
            this->checkError(tex);
            exit(1);
        }

        return tex;
    }
}