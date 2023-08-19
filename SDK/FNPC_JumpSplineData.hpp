#pragma once
#include <cstdint>
class ANPC_Spline;
#pragma pack(push, 1)
struct FNPC_JumpSplineData {
    ANPC_Spline* SplinePtr; // 0x0
    bool bLimitMinMaxSpeed; // 0x8
    char pad_9[0x3];
    float MinSpeed; // 0xc
    float MaxSpeed; // 0x10
    float SpeedScale; // 0x14
    float GravityScalePostApex; // 0x18
    float GravityScalePostApexInterpRate; // 0x1c
    bool bOverrideStartSpeed; // 0x20
    char pad_21[0x3];
    float OverrideStartSpeed; // 0x24
    bool bOverrideGravity; // 0x28
    char pad_29[0x3];
    float OverrideGravity; // 0x2c
    float RotateToFaceRate; // 0x30
    float InterpToSplineInitialRate; // 0x34
    float InterpToSplineRate; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
