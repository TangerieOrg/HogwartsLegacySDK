#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_RequestedLayerBlend : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    char pad_20[0x90];
}; // Size: 0xb0
#pragma pack(pop)
