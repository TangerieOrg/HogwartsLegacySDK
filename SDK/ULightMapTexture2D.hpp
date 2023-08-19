#pragma once
#include <cstdint>
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class ULightMapTexture2D : public UTexture2D {
public:
    char pad_1a0[0x10];
    static ULightMapTexture2D* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
