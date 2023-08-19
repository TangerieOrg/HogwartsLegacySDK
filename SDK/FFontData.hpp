#pragma once
#include <cstdint>
#include "EFontHinting.hpp"
#include "EFontLoadingPolicy.hpp"
class UObject;
#pragma pack(push, 1)
struct FFontData {
    FString FontFilename; // 0x0
    EFontHinting Hinting; // 0x10
    EFontLoadingPolicy LoadingPolicy; // 0x11
    char pad_12[0x2];
    int32_t SubFaceIndex; // 0x14
    UObject* FontFaceAsset; // 0x18
}; // Size: 0x20
#pragma pack(pop)
