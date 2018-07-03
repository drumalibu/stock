//
// Created by andrew on 26.06.18.
//

#include "Renderer.h"

namespace SDL_Frame
{
    Renderer::Renderer(SDL_Window *window, int index = -1, Uint32 flags = Renderer::ACCELERATED)
    {
        this->window    = window;
        this->index     = index ? index : this->getNumDriver();
        this->flags     = flags;
    }

    SDL_Renderer* Renderer::get(SDL_Surface* surface)
    {
        SDL_Renderer* renderer;
        if (surface) {
            renderer = SDL_CreateSoftwareRenderer(surface);
        } else {
            renderer = SDL_CreateRenderer(this->window, this->index, this->flags);
        }

        Renderer::checkError(renderer);

        return renderer;
    }

    int Renderer::getNumDriver()
    {
        return SDL_GetNumRenderDrivers();
    }

    void Renderer::destroy(SDL_Renderer *renderer)
    {
        SDL_DestroyRenderer(renderer);
    }

    void Renderer::clear(SDL_Renderer *renderer)
    {
        SDL_RenderClear(renderer);
    }

    void Renderer::setWindow(SDL_Window *window)
    {
        this->window = window;
    }

    void Renderer::setIndex(int index)
    {
        this->index = index;
    }

    void Renderer::setFlags(Uint32 flags)
    {
        this->flags = flags;
    }
}
