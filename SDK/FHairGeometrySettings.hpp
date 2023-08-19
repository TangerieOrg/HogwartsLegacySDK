#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHairGeometrySettings {
    float HairWidth; // 0x0
    float HairRootScale; // 0x4
    float HairTipScale; // 0x8
    float HairClipScale; // 0xc
}; // Size: 0x10
#pragma pack(pop)
