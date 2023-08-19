#pragma once
#include <cstdint>
class UAnimationAsset;
#pragma pack(push, 1)
struct FSceneRigAnimationRegsitryAnim {
    FString LookupKey; // 0x0
    float SelectionWeight; // 0x10
    char pad_14[0x4];
    UAnimationAsset* UnrealAnimationAsset; // 0x18
}; // Size: 0x20
#pragma pack(pop)
