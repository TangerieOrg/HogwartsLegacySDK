#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSanctuaryPortalMaterialSettings {
    float Desaturation; // 0x0
    float Brightness; // 0x4
    float Contrast; // 0x8
    FLinearColor Tint; // 0xc
}; // Size: 0x1c
#pragma pack(pop)
