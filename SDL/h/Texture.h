//
// Created by andrew on 01.07.18.
//

#ifndef STOCK_TEXTURE_H
#define STOCK_TEXTURE_H

#include "AbstractEntity.h"

namespace SDL
{
    class Texture : public AbstractEntity
    {
    public:
        static const Uint32 PIXEL_UNKNOWN       = SDL_PIXELFORMAT_UNKNOWN;
        static const Uint32 PIXEL_INDEX1LSB     = SDL_PIXELFORMAT_INDEX1LSB;
        static const Uint32 PIXEL_INDEX1MSB     = SDL_PIXELFORMAT_INDEX1MSB;
        static const Uint32 PIXEL_INDEX4LSB     = SDL_PIXELFORMAT_INDEX4LSB;
        static const Uint32 PIXEL_INDEX4MSB     = SDL_PIXELFORMAT_INDEX4MSB;
        static const Uint32 PIXEL_INDEX8        = SDL_PIXELFORMAT_INDEX8;
        static const Uint32 PIXEL_RGB332        = SDL_PIXELFORMAT_RGB332;
        static const Uint32 PIXEL_RGB444        = SDL_PIXELFORMAT_RGB444;
        static const Uint32 PIXEL_RGB555        = SDL_PIXELFORMAT_RGB555;
        static const Uint32 PIXEL_BGR555        = SDL_PIXELFORMAT_BGR555;
        static const Uint32 PIXEL_ARGB4444      = SDL_PIXELFORMAT_ARGB4444;
        static const Uint32 PIXEL_RGBA4444      = SDL_PIXELFORMAT_RGBA4444;
        static const Uint32 PIXEL_ABGR4444      = SDL_PIXELFORMAT_ABGR4444;
        static const Uint32 PIXEL_BGRA4444      = SDL_PIXELFORMAT_BGRA4444;
        static const Uint32 PIXEL_ARGB1555      = SDL_PIXELFORMAT_ARGB1555;
        static const Uint32 PIXEL_RGBA5551      = SDL_PIXELFORMAT_RGBA5551;
        static const Uint32 PIXEL_ABGR1555      = SDL_PIXELFORMAT_ABGR1555;
        static const Uint32 PIXEL_BGRA5551      = SDL_PIXELFORMAT_BGRA5551;
        static const Uint32 PIXEL_RGB565        = SDL_PIXELFORMAT_RGB565;
        static const Uint32 PIXEL_BGR565        = SDL_PIXELFORMAT_BGR565;
        static const Uint32 PIXEL_RGB24         = SDL_PIXELFORMAT_RGB24;
        static const Uint32 PIXEL_BGR24         = SDL_PIXELFORMAT_BGR24;
        static const Uint32 PIXEL_RGB888        = SDL_PIXELFORMAT_RGB888;
        static const Uint32 PIXEL_RGBX8888      = SDL_PIXELFORMAT_RGBX8888;
        static const Uint32 PIXEL_BGR888        = SDL_PIXELFORMAT_BGR888;
        static const Uint32 PIXEL_BGRX8888      = SDL_PIXELFORMAT_BGRX8888;
        static const Uint32 PIXEL_ARGB8888      = SDL_PIXELFORMAT_ARGB8888;
        static const Uint32 PIXEL_RGBA8888      = SDL_PIXELFORMAT_RGBA8888;
        static const Uint32 PIXEL_ABGR8888      = SDL_PIXELFORMAT_ABGR8888;
        static const Uint32 PIXEL_BGRA8888      = SDL_PIXELFORMAT_BGRA8888;
        static const Uint32 PIXEL_ARGB2101010   = SDL_PIXELFORMAT_ARGB2101010;
        static const Uint32 PIXEL_RGBA32        = SDL_PIXELFORMAT_RGBA32;
        static const Uint32 PIXEL_ARGB32        = SDL_PIXELFORMAT_ARGB32;
        static const Uint32 PIXEL_BGRA32        = SDL_PIXELFORMAT_BGRA32;
        static const Uint32 PIXEL_ABGR32        = SDL_PIXELFORMAT_ABGR32;
        static const Uint32 PIXEL_YV12          = SDL_PIXELFORMAT_YV12;
        static const Uint32 PIXEL_IYUV          = SDL_PIXELFORMAT_IYUV;
        static const Uint32 PIXEL_YUY2          = SDL_PIXELFORMAT_YUY2;
        static const Uint32 PIXEL_UYVY          = SDL_PIXELFORMAT_UYVY;
        static const Uint32 PIXEL_YVYU          = SDL_PIXELFORMAT_YVYU;
        static const Uint32 PIXEL_NV12          = SDL_PIXELFORMAT_NV12;
        static const Uint32 PIXEL_NV21          = SDL_PIXELFORMAT_NV21;

        static const int ACCESS_STATIC          = SDL_TEXTUREACCESS_STATIC;
        static const int ACCESS_STREAMING       = SDL_TEXTUREACCESS_STREAMING;
        static const int ACCESS_TARGET          = SDL_TEXTUREACCESS_TARGET;

        Texture() = default;
        Texture(SDL_Renderer* renderer, Uint32 format, int access, int w, int h);

        SDL_Texture* get();
        SDL_Texture* get(bool fromSurface);
        SDL_Texture* get(SDL_Surface* surface);

        void setRenderer(SDL_Renderer* renderer);
        void setSurface(SDL_Surface* surface);
        void setFormat(Uint32 format);
        void setAccess(int access);
        void setSize(int width, int height);

    private:
        SDL_Renderer* renderer  = nullptr;
        SDL_Surface* surface    = nullptr;
        Uint32 format           = Texture::PIXEL_UNKNOWN;
        int access              = Texture::ACCESS_STATIC;
        int width               = 0;
        int height              = 0;
    };
}

#endif //STOCK_TEXTURE_H
