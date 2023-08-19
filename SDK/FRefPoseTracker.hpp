#pragma once
#include <cstdint>
#include "FLocatorTracker.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRefPoseTracker : public FLocatorTracker {
    char pad_8[0x8];
    FTransform ReferenceTransform; // 0x10
    FName BoneName; // 0x40
    int32_t BoneIndex; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
