#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_UseCachedPose : public FAnimNode_Base {
    FPoseLink LinkToCachingNode; // 0x10
    FName CachePoseName; // 0x20
}; // Size: 0x28
#pragma pack(pop)
