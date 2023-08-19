#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPoseSnapshot {
    TArray<FTransform> LocalTransforms; // 0x0
    TArray<FName> BoneNames; // 0x10
    FName SkeletalMeshName; // 0x20
    FName SnapshotName; // 0x28
    bool bIsValid; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
