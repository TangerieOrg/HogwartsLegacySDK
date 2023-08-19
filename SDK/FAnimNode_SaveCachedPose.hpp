#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base {
    FPoseLink Pose; // 0x10
    FName CachePoseName; // 0x20
    char pad_28[0x130];
}; // Size: 0x158
#pragma pack(pop)
