#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMatchTargetRotation : public UCameraStackBehaviorBlend {
public:
    float MatchYaw; // 0x1b8
    float MatchPitch; // 0x1bc
    float MatchRoll; // 0x1c0
    char pad_1c4[0x24];
    static UCameraStackBehaviorMatchTargetRotation* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
