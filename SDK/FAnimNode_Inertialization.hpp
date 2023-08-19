#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_Inertialization : public FAnimNode_Base {
    FPoseLink Source; // 0x10
    char pad_20[0x50];
}; // Size: 0x70
#pragma pack(pop)
