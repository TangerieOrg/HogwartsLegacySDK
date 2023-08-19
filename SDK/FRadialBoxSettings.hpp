#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRadialBoxSettings {
    float StartingAngle; // 0x0
    bool bDistributeItemsEvenly; // 0x4
    char pad_5[0x3];
    float AngleBetweenItems; // 0x8
    float SectorCentralAngle; // 0xc
}; // Size: 0x10
#pragma pack(pop)
