#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FClothVertBoneData {
    int32_t NumInfluences; // 0x0
    uint16_t BoneIndices[12]; // 0x4
    float BoneWeights[12]; // 0x1c
}; // Size: 0x4c
#pragma pack(pop)
