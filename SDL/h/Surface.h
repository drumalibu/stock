//
// Created by andrew on 01.07.18.
//

#ifndef STOCK_SURFACE_H
#define STOCK_SURFACE_H

#include "AbstractEntity.h"
#include <string>

using namespace std;

namespace SDL
{
    class Surface : public AbstractEntity
    {
    public:
        SDL_Surface* createRGBA(int width, int height, int depth);
        SDL_Surface* loadBMP(const string &file);

    private:
    #if SDL_BYTEORDER == SDL_BIG_ENDIAN
        Uint32 rmask = 0xff000000;
        Uint32 gmask = 0x00ff0000;
        Uint32 bmask = 0x0000ff00;
        Uint32 amask = 0x000000ff;
    #else
        Uint32 rmask = 0x000000ff;
        Uint32 gmask = 0x0000ff00;
        Uint32 bmask = 0x00ff0000;
        Uint32 amask = 0xff000000;
    #endif
    };
}

#endif //STOCK_SURFACE_H
