//
// Created by andrew on 26.06.18.
//

#ifndef STOCK_RENDERER_H
#define STOCK_RENDERER_H

#include "AbstractEntity.h"

namespace SDL_Frame
{
    class Renderer : public AbstractEntity
    {
    public:
        static const Uint32 SOFTWARE = SDL_RENDERER_SOFTWARE;
        static const Uint32 ACCELERATED = SDL_RENDERER_ACCELERATED;
        static const Uint32 PRESENTVSYNC = SDL_RENDERER_PRESENTVSYNC;
        static const Uint32 TARGETTEXTURE = SDL_RENDERER_TARGETTEXTURE;

        Renderer(SDL_Window* window, int index, Uint32 flags);

        SDL_Renderer* get(SDL_Surface* surface = nullptr);
        int getNumDriver();
        void destroy(SDL_Renderer* renderer);
        void clear(SDL_Renderer* renderer);

        void setWindow(SDL_Window* window);
        void setIndex(int index);
        void setFlags(Uint32 flags);

    private:
        SDL_Window* window = nullptr;
        int index = -1;
        Uint32 flags = Renderer::ACCELERATED;
    };
}

#endif //STOCK_RENDERER_H
