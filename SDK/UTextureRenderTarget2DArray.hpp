#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#pragma pack(push, 1)
class UTextureRenderTarget2DArray : public UTextureRenderTarget {
public:
    int32_t SizeX; // 0x180
    int32_t SizeY; // 0x184
    int32_t Slices; // 0x188
    bool bSeparateRenderTargetViews; // 0x18c
    char pad_18d[0x3];
    FLinearColor ClearColor; // 0x190
    EPixelFormat OverrideFormat; // 0x1a0
    uint8_t bHDR : 1; // 0x1a1
    uint8_t bForceLinearGamma : 1; // 0x1a1
    uint8_t pad_bitfield_1a1_2 : 6;
    char pad_1a2[0xe];
    static UTextureRenderTarget2DArray* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
