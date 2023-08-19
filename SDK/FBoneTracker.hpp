#pragma once
#include <cstdint>
#include "FActorTracker.hpp"
#pragma pack(push, 1)
struct FBoneTracker : public FActorTracker {
    char pad_10[0x8];
    FName BoneName; // 0x18
    int32_t BoneIndex; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
