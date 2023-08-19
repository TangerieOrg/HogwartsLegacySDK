#pragma once
#include <cstdint>
#include "UTexture.hpp"
#pragma pack(push, 1)
class UTextureRenderTarget : public UTexture {
public:
    static UTextureRenderTarget* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
