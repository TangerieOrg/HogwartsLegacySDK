#pragma once
#include <cstdint>
#include "FRagdollUprightRange.hpp"
#pragma pack(push, 1)
struct FRagdollPoseState {
    FName Name; // 0x0
    TArray<FRagdollUprightRange> PoseMatches; // 0x8
}; // Size: 0x18
#pragma pack(pop)
