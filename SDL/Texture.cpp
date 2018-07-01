//
// Created by andrew on 01.07.18.
//

#include "h/Texture.h"

namespace SDL
{
    Texture::Texture(
            SDL_Renderer *renderer,
            Uint32 format = Texture::PIXEL_UNKNOWN,
            int access = Texture::ACCESS_STATIC,
            int w = 0,
            int h = 0)
    {
        this->renderer = renderer;
        this->format = format;
        this->access = access;
        this->width = w;
        this->height = h;
    }

    SDL_Texture* Texture::get()
    {
        SDL_Texture* texture = SDL_CreateTexture(this->renderer, this->format, this->access, this->width, this->height);
        this->checkError(texture);

        return texture;
    }

    SDL_Texture* Texture::get(bool fromSurface)
    {
        if (!this->surface) {
            this->printError();
        }

        SDL_Texture* texture = SDL_CreateTextureFromSurface(this->renderer, this->surface);
        this->checkError(texture);

        return texture;
    }

    SDL_Texture* Texture::get(SDL_Surface *surface)
    {
        SDL_Texture* texture = SDL_CreateTextureFromSurface(this->renderer, surface);
    }

    void Texture::setRenderer(SDL_Renderer *renderer)
    {
        this->renderer = renderer;
    }

    void Texture::setSurface(SDL_Surface *surface)
    {
        this->surface = surface;
    }

    void Texture::setFormat(Uint32 format)
    {
        this->format = format;
    }

    void Texture::setAccess(int access)
    {
        this->access = access;
    }

    void Texture::setSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
}