#pragma once
#include <cstdint>
#include "FAnimationStateEntry.hpp"
class USkeleton;
class USkeletalMesh;
class UClass;
#pragma pack(push, 1)
struct FPerSkeletonAnimationSharingSetup {
    USkeleton* Skeleton; // 0x0
    USkeletalMesh* SkeletalMesh; // 0x8
    UClass* BlendAnimBlueprint; // 0x10
    UClass* AdditiveAnimBlueprint; // 0x18
    UClass* StateProcessorClass; // 0x20
    TArray<FAnimationStateEntry> AnimationStates; // 0x28
}; // Size: 0x38
#pragma pack(pop)
