//
// Created by andrew on 25.06.18.
//

#ifndef STOCK_WINDOW_H
#define STOCK_WINDOW_H

#include "AbstractEntity.h"

namespace SDL
{
    class Window : public AbstractEntity
    {
    public:
        static const Uint32 FULLSCREEN          = SDL_WINDOW_FULLSCREEN;
        static const Uint32 FULLSCREEN_DESKTOP  = SDL_WINDOW_FULLSCREEN_DESKTOP;
        static const Uint32 OPENGL              = SDL_WINDOW_OPENGL;
        static const Uint32 HIDDEN              = SDL_WINDOW_HIDDEN;
        static const Uint32 RESIZABLE           = SDL_WINDOW_RESIZABLE;
        static const Uint32 MINIMIZED           = SDL_WINDOW_MINIMIZED;
        static const Uint32 MAXIMIZED           = SDL_WINDOW_MAXIMIZED;
        static const Uint32 ALLOW_HIGHDPI       = SDL_WINDOW_ALLOW_HIGHDPI;

        Window() = default;
        explicit Window(
                const char* title,
                int x,
                int y,
                int width,
                int height,
                Uint32 flags
        );

        SDL_Window* get();
        SDL_Window* get(const void* data);
        void destroy(SDL_Window* window);

        void setTitle(const char* title);
        void setPosition(int x, int y);
        void setSize(int width, int height);
        void setFlags(Uint32 flags);

    private:
        const char* title = nullptr;
        int x = 0;
        int y = 0;
        int width = 0;
        int height = 0;
        Uint32 flags = Window::RESIZABLE;
    };
}

#endif //STOCK_WINDOW_H
