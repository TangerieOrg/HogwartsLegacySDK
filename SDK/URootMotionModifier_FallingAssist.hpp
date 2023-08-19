#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_FallingAssist : public URootMotionModifier {
public:
    FVector CurrentVelocityXZ; // 0x50
    float ElapsedTime; // 0x5c
    static URootMotionModifier_FallingAssist* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
