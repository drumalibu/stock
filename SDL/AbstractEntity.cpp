//
// Created by andrew on 01.07.18.
//

#include "AbstractEntity.h"
#include <iostream>

namespace SDL
{
    void AbstractEntity::printError()
    {
        std::cout << "SDL Error occurred: " << SDL_GetError() << std::endl;
    }
}