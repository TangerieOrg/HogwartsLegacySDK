#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSteerAroundCorners : public UCameraStackBehaviorBlend {
public:
    float RotationSpeed; // 0x1b8
    float BlendExponent; // 0x1bc
    FRuntimeFloatCurve SpeedToWeightCurve; // 0x1c0
    float AccelerationEaseSpeed; // 0x248
    float DecelerationEaseSpeed; // 0x24c
    FCameraOptionName SpeedOptionName; // 0x250
    char pad_258[0x18];
    static UCameraStackBehaviorSteerAroundCorners* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
