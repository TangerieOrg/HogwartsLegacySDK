#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDatasmithMeshBuildSettingsTemplate {
    uint8_t bUseMikkTSpace : 1; // 0x0
    uint8_t bRecomputeNormals : 1; // 0x0
    uint8_t bRecomputeTangents : 1; // 0x0
    uint8_t bRemoveDegenerates : 1; // 0x0
    uint8_t bBuildAdjacencyBuffer : 1; // 0x0
    uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0
    uint8_t bUseFullPrecisionUVs : 1; // 0x0
    uint8_t bGenerateLightmapUVs : 1; // 0x0
    char pad_1[0x3];
    int32_t MinLightmapResolution; // 0x4
    int32_t SrcLightmapIndex; // 0x8
    int32_t DstLightmapIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
