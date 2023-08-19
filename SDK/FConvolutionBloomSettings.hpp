#pragma once
#include <cstdint>
#include "FVector2D.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FConvolutionBloomSettings {
    UTexture2D* Texture; // 0x0
    float Size; // 0x8
    FVector2D CenterUV; // 0xc
    float PreFilterMin; // 0x14
    float PreFilterMax; // 0x18
    float PreFilterMult; // 0x1c
    float BufferScale; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
