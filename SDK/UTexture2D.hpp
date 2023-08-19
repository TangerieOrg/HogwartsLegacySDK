#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "TextureAddress.hpp"
#include "UTexture.hpp"
#pragma pack(push, 1)
class UTexture2D : public UTexture {
public:
    uint8_t bTemporarilyDisableStreaming : 1; // 0x180
    uint8_t pad_bitfield_180_1 : 7;
    TextureAddress AddressX; // 0x181
    TextureAddress AddressY; // 0x182
    char pad_183[0x1];
    FIntPoint ImportedSize; // 0x184
    char pad_18c[0x14];
    static UTexture2D* StaticClass();
    int32_t Blueprint_GetSizeY();
    int32_t Blueprint_GetSizeX();
}; // Size: 0x1a0
#pragma pack(pop)
