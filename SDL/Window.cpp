//
// Created by andrew on 25.06.18.
//

#include "Window.h"

namespace SDL
{
    Window::Window(const char* title,
                   int x = 0,
                   int y = 0,
                   int width = 0,
                   int height = 0,
                   Uint32 flags = Window::RESIZABLE)
    {
        this->setTitle(title);
        this->setPosition(x, y);
        this->setSize(width, height);
        this->setFlags(flags);
    }

    SDL_Window* Window::get()
    {
        SDL_Window *window = SDL_CreateWindow(this->title, this->x, this->y, this->width, this->height, this->flags);
        Window::checkError(window);

        return window;
    }

    SDL_Window* Window::get(const void* data)
    {
        return nullptr; // todo
    }

    void Window::destroy(SDL_Window* window)
    {
        SDL_DestroyWindow(window);
    }

    void Window::setTitle(const char* t)
    {
        this->title = t;
    }

    void Window::setSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    void Window::setPosition(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void Window::setFlags(Uint32 flags)
    {
        this->flags = flags;
    }
}