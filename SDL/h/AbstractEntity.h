//
// Created by andrew on 01.07.18.
//

#ifndef STOCK_ABSTRACTENTITY_H
#define STOCK_ABSTRACTENTITY_H

#include <SDL2/SDL.h>

namespace SDL
{
    class AbstractEntity
    {
    protected:
        template <class T>
        void checkError(T obj)
        {
            if (obj == nullptr) {
                AbstractEntity::printError();
                exit(1);
            }
        }
        void printError();
    };
}

#endif //STOCK_ABSTRACTENTITY_H
