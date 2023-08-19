#pragma once
#include <cstdint>
#include "FAnimNode_CustomProperty.hpp"
#include "FControlRigIOSettings.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty {
    FPoseLink Source; // 0x58
    char pad_68[0xf8];
    FControlRigIOSettings InputSettings; // 0x160
    FControlRigIOSettings OutputSettings; // 0x162
    bool bExecute; // 0x164
    char pad_165[0xb];
}; // Size: 0x170
#pragma pack(pop)
