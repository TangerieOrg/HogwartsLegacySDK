#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_Slot : public FAnimNode_Base {
    FPoseLink Source; // 0x10
    FName SlotName; // 0x20
    bool bAlwaysUpdateSourcePose; // 0x28
    char pad_29[0x1f];
}; // Size: 0x48
#pragma pack(pop)
