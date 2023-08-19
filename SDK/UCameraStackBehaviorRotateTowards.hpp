#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorRotateTowards : public UCameraStackBehaviorBlend {
public:
    bool bRotateYaw; // 0x1b8
    bool bRotatePitch; // 0x1b9
    bool bRotateRoll; // 0x1ba
    char pad_1bb[0x1];
    FRotator TargetRotation; // 0x1bc
    float RotationSpeed; // 0x1c8
    char pad_1cc[0x4];
    UCurveFloat* AngleToRotationSpeed; // 0x1d0
    char pad_1d8[0x18];
    static UCameraStackBehaviorRotateTowards* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
