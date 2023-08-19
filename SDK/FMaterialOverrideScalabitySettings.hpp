#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FMaterialOverrideScalabitySettings {
    int32_t QualityLevelBitmask; // 0x0
    char pad_4[0x4];
    UMaterialInterface* MaterialOverride; // 0x8
}; // Size: 0x10
#pragma pack(pop)
