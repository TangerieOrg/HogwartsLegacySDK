#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorResetRotation : public UCameraStackBehaviorBlend {
public:
    float ResetDuration; // 0x1b8
    float DefaultPitch; // 0x1bc
    UCurveFloat* ResetCurve; // 0x1c0
    FRotator DesiredDelta; // 0x1c8
    bool bCancelResetOnInput; // 0x1d4
    bool bResetYaw; // 0x1d5
    bool bResetPitch; // 0x1d6
    char pad_1d7[0x39];
    static UCameraStackBehaviorResetRotation* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
