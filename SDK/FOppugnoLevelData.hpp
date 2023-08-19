#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSpellLevelData.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FOppugnoLevelData : public FSpellLevelData {
    char pad_1[0x3];
    float MassLimit; // 0x4
    int32_t ObjectLimit; // 0x8
    bool bOnlyAffectGroup; // 0xc
    char pad_d[0x3];
    float OppugnoRadius; // 0x10
    float PullBasePhysicsImpulse; // 0x14
    float PullMassScaledPhysicsImpulse; // 0x18
    float PullMaxVelocity; // 0x1c
    float PullTargetRadius; // 0x20
    FVector HoldOffset; // 0x24
    float HoldBasePhysicsImpulse; // 0x30
    float HoldMassScaledPhysicsImpulse; // 0x34
    float HoldMaxVelocity; // 0x38
    float HoldTargetRadius; // 0x3c
    float HoldImpulseScale; // 0x40
    FRotator HoldRotationRate; // 0x44
    float HoldNearDistanceScale; // 0x50
    float ThrowBasePhysicsImpulse; // 0x54
    float ThrowMassScaledPhysicsImpulse; // 0x58
    FVector ThrowTorque; // 0x5c
    float ThrowMaxVelocity; // 0x68
    float ThrowAngle; // 0x6c
    FVector HoldRelativeLocation; // 0x70
    float TimeToPull; // 0x7c
    float TimeToThrow; // 0x80
    char pad_84[0x4];
    FRuntimeFloatCurve PullPrimaryCurve; // 0x88
    FRuntimeFloatCurve PullPerpendicularCurve; // 0x110
    FVector2D PullPerpendicularInputRange; // 0x198
    FVector2D PullPerpendicularOutputRange; // 0x1a0
    float PullPerpendicularRotationAngle; // 0x1a8
    char pad_1ac[0x4];
    FRuntimeFloatCurve PullOvershootCurve; // 0x1b0
    FRuntimeFloatCurve PullThrowCurve; // 0x238
    FRuntimeFloatCurve PullRollCurve; // 0x2c0
    FRuntimeFloatCurve PullPitchCurve; // 0x348
    FRuntimeFloatCurve PullYawCurve; // 0x3d0
    FRuntimeFloatCurve ThrowPitchCurve; // 0x458
}; // Size: 0x4e0
#pragma pack(pop)
