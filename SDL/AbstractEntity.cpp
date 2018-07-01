//
// Created by andrew on 01.07.18.
//

#include <h/AbstractEntity.h>

namespace SDL
{
    template <class T>
    void AbstractEntity::checkError(T obj)
    {
        if (obj == nullptr) {
            this->printError();
            exit(1);
        }
    }

    void AbstractEntity::printError()
    {
        std::cout << "SDL Error occurred: " << SDL_GetError() << std::endl;
    }
}