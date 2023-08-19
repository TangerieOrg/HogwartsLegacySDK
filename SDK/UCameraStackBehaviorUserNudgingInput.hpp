#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorUserNudgingInput : public UCameraStackBehaviorBlend {
public:
    float MaxYaw; // 0x1b8
    float MaxPitch; // 0x1bc
    float SmoothingFrequency; // 0x1c0
    float SmoothingDampingRatio; // 0x1c4
    UCurveFloat* InputMappingCurve; // 0x1c8
    FCameraOptionName InvertXOptionName; // 0x1d0
    FCameraOptionName InvertYOptionName; // 0x1d8
    FCameraOptionName AimingSwitchOptionName; // 0x1e0
    char pad_1e8[0x50];
    static UCameraStackBehaviorUserNudgingInput* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
