#pragma once
#include <cstdint>
#include "FVirtualTextureBuildSettings.hpp"
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class UVirtualTexture2D : public UTexture2D {
public:
    FVirtualTextureBuildSettings Settings; // 0x1a0
    bool bContinuousUpdate; // 0x1ac
    bool bSinglePhysicalSpace; // 0x1ad
    char pad_1ae[0x2];
    static UVirtualTexture2D* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
