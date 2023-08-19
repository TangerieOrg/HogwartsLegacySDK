#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FVolumeCenterlineSettings.hpp"
class AVolume;
#pragma pack(push, 1)
struct FLerpVolumeInfo {
    AVolume* Volume; // 0x0
    FVolumeCenterlineSettings Centerline; // 0x8
    float BlendRadius; // 0x14
    float BlendWeight; // 0x18
    FBox BoundingBox; // 0x1c
    bool bUnbounded; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
