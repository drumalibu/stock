//
// Created by andrew on 01.07.18.
//

#ifndef STOCK_ABSTRACTENTITY_H
#define STOCK_ABSTRACTENTITY_H

#include <iostream>
#include "SDL2/SDL.h"

namespace SDL
{
    template <class T>

    class AbstractEntity
    {
    protected:
        void checkError(T obj);
        void printError();
    };
}

#endif //STOCK_ABSTRACTENTITY_H
