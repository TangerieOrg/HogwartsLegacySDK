#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#pragma pack(push, 1)
class UTextureRenderTargetVolume : public UTextureRenderTarget {
public:
    int32_t SizeX; // 0x180
    int32_t SizeY; // 0x184
    int32_t SizeZ; // 0x188
    FLinearColor ClearColor; // 0x18c
    EPixelFormat OverrideFormat; // 0x19c
    uint8_t bHDR : 1; // 0x19d
    uint8_t bForceLinearGamma : 1; // 0x19d
    uint8_t pad_bitfield_19d_2 : 6;
    char pad_19e[0x2];
    static UTextureRenderTargetVolume* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
