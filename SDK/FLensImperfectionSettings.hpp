#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UTexture;
#pragma pack(push, 1)
struct FLensImperfectionSettings {
    UTexture* DirtMask; // 0x0
    float DirtMaskIntensity; // 0x8
    FLinearColor DirtMaskTint; // 0xc
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
