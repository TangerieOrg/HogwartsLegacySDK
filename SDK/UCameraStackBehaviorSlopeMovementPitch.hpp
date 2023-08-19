#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorSlopeMovementPitch : public UCameraStackBehaviorBlend {
public:
    FRuntimeFloatCurve MovementPitchToCameraPitch; // 0x1b8
    float PitchSpeed; // 0x240
    char pad_244[0x4];
    UCurveFloat* PitchToPitchSpeed; // 0x248
    FRuntimeFloatCurve MovementSpeedToPitchSpeed; // 0x250
    FRuntimeFloatCurve MovementPitchToPitchSpeed; // 0x2d8
    float MovementPitchFrequency; // 0x360
    float MovementPitchDamping; // 0x364
    float SpeedRampUpFrequency; // 0x368
    float SpeedRampDownFrequency; // 0x36c
    float SpeedDamping; // 0x370
    char pad_374[0x64];
    static UCameraStackBehaviorSlopeMovementPitch* StaticClass();
}; // Size: 0x3d8
#pragma pack(pop)
