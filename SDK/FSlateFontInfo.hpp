#pragma once
#include <cstdint>
#include "FFontOutlineSettings.hpp"
class UObject;
#pragma pack(push, 1)
struct FSlateFontInfo {
    UObject* FontObject; // 0x0
    UObject* FontMaterial; // 0x8
    FFontOutlineSettings OutlineSettings; // 0x10
    char pad_30[0x10];
    FName TypefaceFontName; // 0x40
    int32_t Size; // 0x48
    int32_t LetterSpacing; // 0x4c
    char pad_50[0x8];
}; // Size: 0x58
#pragma pack(pop)
