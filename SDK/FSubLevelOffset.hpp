#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSubLevelOffset : public FTableRowBase {
    FVector Position; // 0x8
    float Yaw; // 0x14
    bool HasCentroid; // 0x18
    char pad_19[0x3];
    FVector LevelCentroid; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
