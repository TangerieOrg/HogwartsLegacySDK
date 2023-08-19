#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_LinkedInputPose : public FAnimNode_Base {
    FName Name; // 0x10
    FName Graph; // 0x18
    FPoseLink InputPose; // 0x20
    char pad_30[0xe8];
}; // Size: 0x118
#pragma pack(pop)
