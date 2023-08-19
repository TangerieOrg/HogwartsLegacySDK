#pragma once
#include <cstdint>
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class UTextureLightProfile : public UTexture2D {
public:
    float Brightness; // 0x1a0
    float TextureMultiplier; // 0x1a4
    char pad_1a8[0x8];
    static UTextureLightProfile* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
