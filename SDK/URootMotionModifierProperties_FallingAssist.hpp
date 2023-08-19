#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_FallingAssist : public URootMotionModifierProperties {
public:
    float MinSpeed; // 0x30
    float MaxSpeed; // 0x34
    float InterpToZero; // 0x38
    char pad_3c[0x4];
    static URootMotionModifierProperties_FallingAssist* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
