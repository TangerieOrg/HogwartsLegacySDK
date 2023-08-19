#pragma once
#include <cstdint>
#include "ERefPoseType.hpp"
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_RefPose : public FAnimNode_Base {
    ERefPoseType RefPoseType; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
