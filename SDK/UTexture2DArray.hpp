#pragma once
#include <cstdint>
#include "TextureAddress.hpp"
#include "UTexture.hpp"
#pragma pack(push, 1)
class UTexture2DArray : public UTexture {
public:
    char pad_180[0x50];
    TextureAddress AddressX; // 0x1d0
    TextureAddress AddressY; // 0x1d1
    TextureAddress AddressZ; // 0x1d2
    char pad_1d3[0xd];
    static UTexture2DArray* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)
