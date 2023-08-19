#pragma once
#include <cstdint>
#include "EMultiplierType.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Multiplier : public URootMotionModifierProperties {
public:
    EMultiplierType MultiplyType; // 0x30
    char pad_31[0x3];
    float XAxis_Multiplier; // 0x34
    float YAxis_Multiplier; // 0x38
    float ZAxis_Multiplier; // 0x3c
    float Multiplier; // 0x40
    char pad_44[0x4];
    static URootMotionModifierProperties_Multiplier* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
