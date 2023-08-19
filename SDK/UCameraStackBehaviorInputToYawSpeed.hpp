#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorInputToYawSpeed : public UCameraStackBehaviorBlend {
public:
    float MinRequiredInput; // 0x1b8
    float MinTargetSpeed; // 0x1bc
    float LagSpeed; // 0x1c0
    char pad_1c4[0x4];
    UCurveFloat* AngleToYawSpeedCurve; // 0x1c8
    float SpeedMultiplier; // 0x1d0
    FCameraOptionName FollowCameraSpeedOptionName; // 0x1d4
    char pad_1dc[0x24];
    static UCameraStackBehaviorInputToYawSpeed* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
