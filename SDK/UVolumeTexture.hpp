#pragma once
#include <cstdint>
#include "UTexture.hpp"
#pragma pack(push, 1)
class UVolumeTexture : public UTexture {
public:
    char pad_180[0x50];
    static UVolumeTexture* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
