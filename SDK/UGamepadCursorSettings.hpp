#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UGamepadCursorSettings : public UDeveloperSettings {
public:
    FRuntimeFloatCurve AnalogCursorAccelerationCurve; // 0x38
    float MaxAnalogCursorSpeed; // 0xc0
    float MaxAnalogCursorSpeedWhenHovered; // 0xc4
    float AnalogCursorDragCoefficient; // 0xc8
    float AnalogCursorDragCoefficientWhenHovered; // 0xcc
    float MinAnalogCursorSpeed; // 0xd0
    float AnalogCursorDeadZone; // 0xd4
    float MinTimeToMaximumVelocity; // 0xd8
    float AnalogCursorAccelerationMultiplier; // 0xdc
    float AnalogCursorSize; // 0xe0
    bool bUseEngineAnalogCursor; // 0xe4
    bool bAnalogCursorNoAcceleration; // 0xe5
    char pad_e6[0x2];
    float TouchpadLerpSpeed; // 0xe8
    float TouchpadScalarZone; // 0xec
    float TouchpadDeadZone; // 0xf0
    float TouchpadDeadZoneWhenHovered; // 0xf4
    char pad_f8[0x18];
    static UGamepadCursorSettings* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
