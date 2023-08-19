#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UObject;
#pragma pack(push, 1)
struct FFontOutlineSettings {
    int32_t OutlineSize; // 0x0
    bool bSeparateFillAlpha; // 0x4
    bool bApplyOutlineToDropShadows; // 0x5
    char pad_6[0x2];
    UObject* OutlineMaterial; // 0x8
    FLinearColor OutlineColor; // 0x10
}; // Size: 0x20
#pragma pack(pop)
