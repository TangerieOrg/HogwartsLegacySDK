#pragma once
#include <cstdint>
#include "ESkinCacheUsage.hpp"
#include "FBoneReference.hpp"
#include "FPerPlatformFloat.hpp"
#include "FPerPlatformInt.hpp"
#include "FSkeletalMeshBuildSettings.hpp"
#include "FSkeletalMeshOptimizationSettings.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FSkeletalMeshLODInfo {
    FPerPlatformFloat ScreenSize; // 0x0
    FPerPlatformInt ForceShadowProxyLOD; // 0x4
    float LODHysteresis; // 0x8
    char pad_c[0x4];
    TArray<int32_t> LODMaterialMap; // 0x10
    FSkeletalMeshBuildSettings BuildSettings; // 0x20
    FSkeletalMeshOptimizationSettings ReductionSettings; // 0x34
    char pad_74[0x4];
    TArray<FBoneReference> BonesToRemove; // 0x78
    TArray<FBoneReference> BonesToPrioritize; // 0x88
    float WeightOfPrioritization; // 0x98
    char pad_9c[0x4];
    UAnimSequence* BakePose; // 0xa0
    UAnimSequence* BakePoseOverride; // 0xa8
    FString SourceImportFilename; // 0xb0
    ESkinCacheUsage SkinCacheUsage; // 0xc0
    uint8_t bHasBeenSimplified : 1; // 0xc1
    uint8_t bHasPerLODVertexColors : 1; // 0xc1
    uint8_t bAllowCPUAccess : 1; // 0xc1
    uint8_t bSupportUniformlyDistributedSampling : 1; // 0xc1
    uint8_t pad_bitfield_c1_4 : 4;
    char pad_c2[0x6];
}; // Size: 0xc8
#pragma pack(pop)
