#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorUserInput : public UCameraStackBehaviorBlend {
public:
    float YawSpeed; // 0x1b8
    float DefaultPitchSpeed; // 0x1bc
    UCurveFloat* PitchToPitchSpeedPositive; // 0x1c0
    UCurveFloat* PitchToPitchSpeedNegative; // 0x1c8
    float DefaultPitch; // 0x1d0
    char pad_1d4[0x4];
    UCurveFloat* InputMappingCurve; // 0x1d8
    float MinGamepadInputForAcceleration; // 0x1e0
    float AccelerationSpeedFactor; // 0x1e4
    float AccelerationEaseSpeed; // 0x1e8
    float DecelerationEaseSpeed; // 0x1ec
    float ResetTime; // 0x1f0
    char pad_1f4[0x4];
    UCurveFloat* ResetCurve; // 0x1f8
    FCameraOptionName InvertXOptionName; // 0x200
    FCameraOptionName InvertYOptionName; // 0x208
    FCameraOptionName SensitivityOptionName; // 0x210
    FCameraOptionName AccelerationOptionName; // 0x218
    FCameraOptionName AimingSwitchOptionName; // 0x220
    bool bSwapCameraSticks; // 0x228
    char pad_229[0x37];
    static UCameraStackBehaviorUserInput* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
