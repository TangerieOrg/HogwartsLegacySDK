#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#pragma pack(push, 1)
struct FQuadrupedSpineRebase {
    FBoneReferenceEx ParentBone; // 0x0
    TArray<FBoneReferenceEx> RebaseBones; // 0x10
    char pad_20[0x80];
}; // Size: 0xa0
#pragma pack(pop)
