//
// Created by andrew on 01.07.18.
//

#include "Surface.h"

namespace SDL_Frame
{
    SDL_Surface* Surface::createRGBA(int width, int height, int depth)
    {
        SDL_Surface* surface = SDL_CreateRGBSurface(
                0,
                width,
                height,
                depth,
                this->rmask,
                this->gmask,
                this->bmask,
                this->amask
        );

        Surface::checkError(surface);

        return surface;
    }

    SDL_Surface* Surface::loadBMP(const string &file)
    {
        SDL_Surface* surface = SDL_LoadBMP(file.c_str());
        
        Surface::checkError(surface);
        
        return surface;
    }
}