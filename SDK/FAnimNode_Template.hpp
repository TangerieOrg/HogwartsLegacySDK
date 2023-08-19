#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_Template : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
}; // Size: 0x20
#pragma pack(pop)
