#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_EyeTarget : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    char pad_20[0x20];
    int32_t LODThreshold; // 0x40
    char pad_44[0x11c];
}; // Size: 0x160
#pragma pack(pop)
