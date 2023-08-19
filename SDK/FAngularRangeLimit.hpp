#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAngularRangeLimit {
    FVector LimitMin; // 0x0
    FVector LimitMax; // 0xc
    FBoneReference Bone; // 0x18
}; // Size: 0x28
#pragma pack(pop)
