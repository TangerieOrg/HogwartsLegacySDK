#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base {
    FPoseLink InputPose; // 0x10
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
