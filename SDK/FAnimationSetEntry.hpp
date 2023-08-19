#pragma once
#include <cstdint>
#include "AnimationValidatedInWorld.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
struct FAnimationSetEntry {
    FName EntryName; // 0x0
    UAnimationAsset* AnimationAsset; // 0x8
    AnimationValidatedInWorld InWorldStatus; // 0x10
    bool bSelectedForNextUse; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
