#include "Window.h"

using namespace SDL;

int main()
{
    auto* win = new SDL::Window("qwe", 10, 10, 300, 300, Window::RESIZABLE);

    return 0;
}