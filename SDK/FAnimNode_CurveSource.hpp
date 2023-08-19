#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_CurveSource : public FAnimNode_Base {
    FPoseLink SourcePose; // 0x10
    FName SourceBinding; // 0x20
    float Alpha; // 0x28
    char pad_2c[0x14];
}; // Size: 0x40
#pragma pack(pop)
