#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_CustomizableCharacterEyeCap : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    int32_t LODThreshold; // 0x20
    float BlinkCap; // 0x24
    char pad_28[0x50];
}; // Size: 0x78
#pragma pack(pop)
