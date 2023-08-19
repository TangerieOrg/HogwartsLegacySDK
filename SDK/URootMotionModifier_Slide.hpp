#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_Slide : public URootMotionModifier {
public:
    FVector CurrentVelocity; // 0x50
    char pad_5c[0x4];
    static URootMotionModifier_Slide* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
