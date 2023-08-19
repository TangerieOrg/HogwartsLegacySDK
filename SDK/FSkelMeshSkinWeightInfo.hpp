#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkelMeshSkinWeightInfo {
    int32_t Bones[12]; // 0x0
    uint8_t Weights[12]; // 0x30
}; // Size: 0x3c
#pragma pack(pop)
