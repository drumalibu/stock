//
// Created by andrew on 25.06.18.
//

#include "Window.h"

namespace SDL_Frame
{
    Window::Window(const char* title,
                   int x,
                   int y,
                   int width,
                   int height,
                   Uint32 flags)
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

    void Window::show()
    {
        if (!this->window) {
            return;
        }

        Window::show(this->window);
    }

    void Window::show(SDL_Window* window)
    {
        SDL_ShowWindow(window);
    }

    void Window::setWindow(SDL_Window* window)
    {
        this->window = window;
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