#pragma once
#include <cstdint>
#include "EBoneFilterActionOption.hpp"
#include "FBoneFilter.hpp"
#include "FPerPlatformFloat.hpp"
#include "FSkeletalMeshOptimizationSettings.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FSkeletalMeshLODGroupSettings {
    FPerPlatformFloat ScreenSize; // 0x0
    float LODHysteresis; // 0x4
    EBoneFilterActionOption BoneFilterActionOption; // 0x8
    char pad_9[0x7];
    TArray<FBoneFilter> BoneList; // 0x10
    TArray<FName> BonesToPrioritize; // 0x20
    float WeightOfPrioritization; // 0x30
    char pad_34[0x4];
    UAnimSequence* BakePose; // 0x38
    FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40
}; // Size: 0x80
#pragma pack(pop)
