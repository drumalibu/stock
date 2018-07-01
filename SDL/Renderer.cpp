//
// Created by andrew on 26.06.18.
//

#include <h/Renderer.h>

namespace SDL
{
    Renderer::Renderer(SDL_Window *window, int index = nullptr, Uint32 flags = nullptr)
    {
        this->window    = window;
        this->index     = index ? index : this->getNumDriver();
        this->flags     = flags;
    }

    SDL_Renderer* Renderer::get(SDL_Surface* surface = nullptr)
    {
        SDL_Renderer* renderer;
        if (surface) {
            renderer = SDL_CreateSoftwareRenderer(surface);
        } else {
            renderer = SDL_CreateRenderer(this->window, this->index, this->flags);
        }

        this->checkError(renderer);

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
