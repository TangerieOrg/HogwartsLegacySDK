#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_BoneHarmonics_WorkData {
    TArray<FCachedRigElement> CachedItems; // 0x0
    FVector WaveTime; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
