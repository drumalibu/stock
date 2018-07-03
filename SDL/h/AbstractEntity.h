//
// Created by andrew on 01.07.18.
//

#ifndef STOCK_ABSTRACTENTITY_H
#define STOCK_ABSTRACTENTITY_H

#include <SDL2/SDL.h>

namespace SDL_Frame
{
    class AbstractEntity
    {
    protected:
        template <class T>
        static void checkError(T obj)
        {
            if (obj == nullptr) {
                AbstractEntity::printError();
                exit(1);
            }
        }
        static void printError();
    };
}

#endif //STOCK_ABSTRACTENTITY_H
