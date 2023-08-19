#pragma once
#include <cstdint>
#include "EMeshLODSelectionType.hpp"
#include "EUVOutput.hpp"
#include "FMaterialProxySettings.hpp"
#pragma pack(push, 1)
struct FMeshMergingSettings {
    int32_t TargetLightMapResolution; // 0x0
    EUVOutput OutputUVs[8]; // 0x4
    FMaterialProxySettings MaterialSettings; // 0xc
    int32_t GutterSize; // 0x94
    int32_t SpecificLOD; // 0x98
    EMeshLODSelectionType LODSelectionType; // 0x9c
    uint8_t bGenerateLightMapUV : 1; // 0x9d
    uint8_t bComputedLightMapResolution : 1; // 0x9d
    uint8_t bPivotPointAtZero : 1; // 0x9d
    uint8_t bMergePhysicsData : 1; // 0x9d
    uint8_t bMergeMaterials : 1; // 0x9d
    uint8_t bCreateMergedMaterial : 1; // 0x9d
    uint8_t bBakeVertexDataToMesh : 1; // 0x9d
    uint8_t bUseVertexDataForBakingMaterial : 1; // 0x9d
    uint8_t bUseTextureBinning : 1; // 0x9e
    uint8_t bReuseMeshLightmapUVs : 1; // 0x9e
    uint8_t bMergeEquivalentMaterials : 1; // 0x9e
    uint8_t bUseLandscapeCulling : 1; // 0x9e
    uint8_t bIncludeImposters : 1; // 0x9e
    uint8_t bAllowDistanceField : 1; // 0x9e
    uint8_t pad_bitfield_9e_6 : 2;
    char pad_9f[0x1];
}; // Size: 0xa0
#pragma pack(pop)
