#pragma once
#include <cstdint>
#include "EJumpControlType.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_JumpControl : public URootMotionModifierProperties {
public:
    float InitialSpeed; // 0x30
    float MaxSpeed; // 0x34
    float AccelerationInterpSpeed; // 0x38
    float BrakingInterpSpeed; // 0x3c
    EJumpControlType JumpControlType; // 0x40
    char pad_41[0x3];
    float BlendInTime; // 0x44
    static URootMotionModifierProperties_JumpControl* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
