#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddAccumulatedRotation : public UCameraStackBehaviorBlend {
public:
    FRotator RotationPerSecond; // 0x1b8
    char pad_1c4[0x1c];
    static UCameraStackBehaviorAddAccumulatedRotation* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)
