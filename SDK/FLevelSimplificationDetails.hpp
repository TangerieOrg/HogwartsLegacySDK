#pragma once
#include <cstdint>
#include "FMaterialProxySettings.hpp"
#pragma pack(push, 1)
struct FLevelSimplificationDetails {
    bool bCreatePackagePerAsset; // 0x0
    char pad_1[0x3];
    float DetailsPercentage; // 0x4
    int32_t ScreenSize; // 0x8
    bool bProcessLandscapeOnly; // 0xc
    char pad_d[0x3];
    FMaterialProxySettings StaticMeshMaterialSettings; // 0x10
    bool bOverrideLandscapeExportLOD; // 0x98
    char pad_99[0x3];
    int32_t LandscapeExportLOD; // 0x9c
    FMaterialProxySettings LandscapeMaterialSettings; // 0xa0
    bool bBakeFoliageToLandscape; // 0x128
    bool bBakeGrassToLandscape; // 0x129
    bool bProcessLightingOnly; // 0x12a
    bool bwIncludeFoliageMeshes; // 0x12b
    bool bGenerateMeshNormalMap; // 0x12c
    bool bGenerateMeshMetallicMap; // 0x12d
    bool bGenerateMeshRoughnessMap; // 0x12e
    bool bGenerateMeshSpecularMap; // 0x12f
    bool bGenerateLandscapeNormalMap; // 0x130
    bool bGenerateLandscapeMetallicMap; // 0x131
    bool bGenerateLandscapeRoughnessMap; // 0x132
    bool bGenerateLandscapeSpecularMap; // 0x133
}; // Size: 0x134
#pragma pack(pop)
