#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMapTriangle {
    uint32_t Index; // 0x0
    int32_t Indices[3]; // 0x4
    FVector Vertex[3]; // 0x10
    int32_t LayerIndex; // 0x34
    char pad_38[0x38];
}; // Size: 0x70
#pragma pack(pop)
