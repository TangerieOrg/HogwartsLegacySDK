#pragma once
#include <cstdint>
#include "FVector.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FMeshBuildSettings {
    uint8_t bUseMikkTSpace : 1; // 0x0
    uint8_t bRecomputeNormals : 1; // 0x0
    uint8_t bRecomputeTangents : 1; // 0x0
    uint8_t bComputeWeightedNormals : 1; // 0x0
    uint8_t bRemoveDegenerates : 1; // 0x0
    uint8_t bBuildAdjacencyBuffer : 1; // 0x0
    uint8_t bBuildReversedIndexBuffer : 1; // 0x0
    uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0
    uint8_t bUseFullPrecisionUVs : 1; // 0x1
    uint8_t bGenerateLightmapUVs : 1; // 0x1
    uint8_t bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1
    uint8_t bSupportFaceRemap : 1; // 0x1
    uint8_t pad_bitfield_1_4 : 4;
    char pad_2[0x2];
    int32_t MinLightmapResolution; // 0x4
    int32_t SrcLightmapIndex; // 0x8
    int32_t DstLightmapIndex; // 0xc
    float BuildScale; // 0x10
    FVector BuildScale3D; // 0x14
    float DistanceFieldResolutionScale; // 0x20
    char pad_24[0x4];
    UStaticMesh* DistanceFieldReplacementMesh; // 0x28
}; // Size: 0x30
#pragma pack(pop)
