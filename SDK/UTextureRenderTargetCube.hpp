#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#pragma pack(push, 1)
class UTextureRenderTargetCube : public UTextureRenderTarget {
public:
    int32_t SizeX; // 0x180
    FLinearColor ClearColor; // 0x184
    EPixelFormat OverrideFormat; // 0x194
    uint8_t bHDR : 1; // 0x195
    uint8_t bForceLinearGamma : 1; // 0x195
    uint8_t pad_bitfield_195_2 : 6;
    char pad_196[0xa];
    static UTextureRenderTargetCube* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
