#pragma once
#include <cstdint>
#include "ESkinFXMaterialOverrideType.hpp"
#pragma pack(push, 1)
struct FSkinFXMaterialOverride {
    ESkinFXMaterialOverrideType Type; // 0x0
    char pad_1[0x7];
    TArray<void*> Materials; // 0x8
}; // Size: 0x18
#pragma pack(pop)
