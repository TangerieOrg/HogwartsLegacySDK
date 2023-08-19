#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Strafe : public URootMotionModifierProperties {
public:
    float Acceleration; // 0x30
    char pad_34[0x4];
    static URootMotionModifierProperties_Strafe* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
