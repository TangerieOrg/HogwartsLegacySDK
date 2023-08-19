#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FMercunaOctreeData {
    FRotator Rotation; // 0x0
    float CellSize; // 0xc
    int32_t MinPawnRadius; // 0x10
    int32_t MaxPawnRadius; // 0x14
    bool bAllowOctreeMerging; // 0x18
    bool bRecordOctreeDeltas; // 0x19
    char pad_1a[0x2];
}; // Size: 0x1c
#pragma pack(pop)
