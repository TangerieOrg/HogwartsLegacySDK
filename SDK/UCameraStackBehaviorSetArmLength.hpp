#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSetArmLength : public UCameraStackBehaviorBlend {
public:
    float ArmLength; // 0x1b8
    char pad_1bc[0x4];
    static UCameraStackBehaviorSetArmLength* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
