#pragma once
#include <cstdint>
#include "FAnimNode_ControlRigBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_IKMasterNode : public FAnimNode_ControlRigBase {
    char pad_170[0x30];
    float PoseBlendAlpha; // 0x1a0
    char pad_1a4[0xc];
}; // Size: 0x1b0
#pragma pack(pop)
