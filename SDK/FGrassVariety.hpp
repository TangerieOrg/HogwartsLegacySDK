#pragma once
#include <cstdint>
#include "EGrassScaling.hpp"
#include "FFloatInterval.hpp"
#include "FLightingChannels.hpp"
#include "FPerPlatformFloat.hpp"
#include "FPerPlatformInt.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
struct FGrassVariety {
    UStaticMesh* GrassMesh; // 0x0
    TArray<UMaterialInterface*> OverrideMaterials; // 0x8
    FPerPlatformFloat GrassDensity; // 0x18
    bool bUseGrid; // 0x1c
    char pad_1d[0x3];
    float PlacementJitter; // 0x20
    FPerPlatformInt StartCullDistance; // 0x24
    FPerPlatformInt EndCullDistance; // 0x28
    int32_t MinLOD; // 0x2c
    EGrassScaling Scaling; // 0x30
    char pad_31[0x3];
    FFloatInterval ScaleX; // 0x34
    FFloatInterval ScaleY; // 0x3c
    FFloatInterval ScaleZ; // 0x44
    bool RandomRotation; // 0x4c
    bool AlignToSurface; // 0x4d
    bool bUseLandscapeLightmap; // 0x4e
    FLightingChannels LightingChannels; // 0x4f
    bool bReceivesDecals; // 0x50
    bool bReceivesWeatherDecals; // 0x51
    uint8_t ReceivesWeatherDecalsMask; // 0x52
    bool bCastDynamicShadow; // 0x53
    bool bCastContactShadow; // 0x54
    char pad_55[0x53];
    TArray<void*> SpringOverrideMaterials; // 0xa8
    TArray<void*> SummerOverrideMaterials; // 0xb8
    TArray<void*> FallOverrideMaterials; // 0xc8
    TArray<void*> WinterOverrideMaterials; // 0xd8
    bool bKeepInstanceBufferCPUCopy; // 0xe8
    char pad_e9[0x7];
}; // Size: 0xf0
#pragma pack(pop)
