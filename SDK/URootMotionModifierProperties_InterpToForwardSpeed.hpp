#pragma once
#include <cstdint>
#include "ERootMotModDesiredSpeed\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_InterpToForwardSpeed : public URootMotionModifierProperties {
public:
    ERootMotModDesiredSpeed::Type DesiredSpeedState; // 0x30
    char pad_31[0x3];
    float DesiredSpeed; // 0x34
    float MinSpeed; // 0x38
    float MaxSpeed; // 0x3c
    float InterpSpeed; // 0x40
    char pad_44[0x4];
    static URootMotionModifierProperties_InterpToForwardSpeed* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
