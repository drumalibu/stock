#include "SDL/h/SDL.h"
#include "SDL/h/Window.h"

using namespace SDL;

int main()
{
    //SDL_Window* window = new Window();

    auto sdl = new SDL();
    SDL_Window* MyWindow;
    MyWindow = sdl->window("privet",400,500,700,700,SDL_WINDOW_SHOWN);
    SDL_Delay(3000);
    SDL_DestroyWindow(MyWindow);
    return 0;
}