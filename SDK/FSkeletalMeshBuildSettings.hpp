#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkeletalMeshBuildSettings {
    uint8_t bRecomputeNormals : 1; // 0x0
    uint8_t bRecomputeTangents : 1; // 0x0
    uint8_t bUseMikkTSpace : 1; // 0x0
    uint8_t bComputeWeightedNormals : 1; // 0x0
    uint8_t bRemoveDegenerates : 1; // 0x0
    uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0
    uint8_t bUseFullPrecisionUVs : 1; // 0x0
    uint8_t bBuildAdjacencyBuffer : 1; // 0x0
    char pad_1[0x3];
    float ThresholdPosition; // 0x4
    float ThresholdTangentNormal; // 0x8
    float ThresholdUV; // 0xc
    float MorphThresholdPosition; // 0x10
}; // Size: 0x14
#pragma pack(pop)
