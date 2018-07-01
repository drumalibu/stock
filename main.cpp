#include "SDL/h/AbstractEntity.h"
#include "SDL/h/Window.h"

using namespace SDL;

int main()
{
    auto* win = new Window("qwe", 10, 10, 300, 300, Window::RESIZABLE);

    return 0;
}