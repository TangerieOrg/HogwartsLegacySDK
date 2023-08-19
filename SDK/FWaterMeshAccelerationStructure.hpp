#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FWaterMeshAccelerationStructure {
    TArray<uint8_t> Data; // 0x0
    FVector2D LakeLocation; // 0x10
    float Extents; // 0x18
    int32_t CellsInRow; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
