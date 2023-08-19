#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMoveTargetToRagdollCOM : public UCameraStackBehaviorBlend {
public:
    float verticalOffset; // 0x1b8
    char pad_1bc[0x1c];
    static UCameraStackBehaviorMoveTargetToRagdollCOM* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)
