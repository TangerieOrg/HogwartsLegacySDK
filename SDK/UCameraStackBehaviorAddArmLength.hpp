#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddArmLength : public UCameraStackBehaviorBlend {
public:
    float ArmLengthOffset; // 0x1b8
    char pad_1bc[0x4];
    static UCameraStackBehaviorAddArmLength* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
