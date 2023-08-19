#pragma once
#include <cstdint>
#include "FSimpleCapsuleSkeleton.hpp"
#pragma pack(push, 1)
struct FSimpleCapsuleSkeletonWithBones : public FSimpleCapsuleSkeleton {
    char pad_80[0x50];
}; // Size: 0xd0
#pragma pack(pop)
