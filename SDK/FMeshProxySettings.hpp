#pragma once
#include <cstdint>
#include "ELandscapeCullingPrecision\Type.hpp"
#include "EProxyNormalComputationMethod\Type.hpp"
#include "FColor.hpp"
#include "FMaterialProxySettings.hpp"
#pragma pack(push, 1)
struct FMeshProxySettings {
    int32_t ScreenSize; // 0x0
    float VoxelSize; // 0x4
    FMaterialProxySettings MaterialSettings; // 0x8
    float MergeDistance; // 0x90
    FColor UnresolvedGeometryColor; // 0x94
    float MaxRayCastDist; // 0x98
    float HardAngleThreshold; // 0x9c
    int32_t LightMapResolution; // 0xa0
    EProxyNormalComputationMethod::Type NormalCalculationMethod; // 0xa4
    ELandscapeCullingPrecision::Type LandscapeCullingPrecision; // 0xa5
    uint8_t bCalculateCorrectLODModel : 1; // 0xa6
    uint8_t bOverrideVoxelSize : 1; // 0xa6
    uint8_t bOverrideTransferDistance : 1; // 0xa6
    uint8_t bUseHardAngleThreshold : 1; // 0xa6
    uint8_t bComputeLightMapResolution : 1; // 0xa6
    uint8_t bRecalculateNormals : 1; // 0xa6
    uint8_t bUseLandscapeCulling : 1; // 0xa6
    uint8_t bAllowAdjacency : 1; // 0xa6
    uint8_t bAllowDistanceField : 1; // 0xa7
    uint8_t bReuseMeshLightmapUVs : 1; // 0xa7
    uint8_t bCreateCollision : 1; // 0xa7
    uint8_t bAllowVertexColors : 1; // 0xa7
    uint8_t bGenerateLightmapUVs : 1; // 0xa7
    uint8_t pad_bitfield_a7_5 : 3;
    int32_t wLODNumber; // 0xa8
    bool bwIncludeFoliageMeshes; // 0xac
    char pad_ad[0x3];
}; // Size: 0xb0
#pragma pack(pop)
