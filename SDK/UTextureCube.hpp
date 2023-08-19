#pragma once
#include <cstdint>
#include "UTexture.hpp"
#pragma pack(push, 1)
class UTextureCube : public UTexture {
public:
    char pad_180[0x50];
    static UTextureCube* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
