#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "FFlyingBroomImpulseData.hpp"
#include "UFlyingBroomPhysics.hpp"
#pragma pack(push, 1)
class UFlyingBroomPhysics_FreeRoam : public UFlyingBroomPhysics {
public:
    FFlyingBroomImpulseData HoverForwardImpulse; // 0x38
    FFlyingBroomImpulseData PassiveForwardImpulse; // 0x54
    FFlyingBroomImpulseData BoostForwardImpulse; // 0x70
    float ThrusterEaseHalflife; // 0x8c
    FFlyingBroomImpulseData HoverVerticalImpulse; // 0x90
    FFlyingBroomImpulseData PassiveVerticalImpulse; // 0xac
    FFlyingBroomImpulseData BoostVerticalImpulse; // 0xc8
    FFlyingBroomImpulseData LateralImpulse; // 0xe4
    float ConformToGroundHeight; // 0x100
    bool bUseWorldHeightForDangerZone; // 0x104
    char pad_105[0x3];
    float DangerZoneFromGround; // 0x108
    float DangerZoneWorldHeight; // 0x10c
    float GroundBuffer; // 0x110
    float CeilingBuffer; // 0x114
    float ConformToGroundTime; // 0x118
    FFlyingBroomImpulseData DangerZoneImpulse; // 0x11c
    FFlyingBroomImpulseData GroundBufferImpulse; // 0x138
    FFlyingBroomImpulseData CeilingBufferImpulse; // 0x154
    bool bDangerZoneIfNoGroundFound; // 0x170
    char pad_171[0x3];
    float HoverYawMinInterpSpeed; // 0x174
    float HoverYawMaxInterpSpeed; // 0x178
    float PassiveYawMinInterpSpeed; // 0x17c
    float PassiveYawMaxInterpSpeed; // 0x180
    float BoostYawMinInterpSpeed; // 0x184
    float BoostYawMaxInterpSpeed; // 0x188
    float TurboYawMinInterpSpeed; // 0x18c
    float TurboYawMaxInterpSpeed; // 0x190
    float YawSpringHalfLife; // 0x194
    float MaxYawTurnAngle; // 0x198
    float WallTraceLengthMax; // 0x19c
    float WallTraceVerticalLengthMax; // 0x1a0
    float WallTraceLengthStop; // 0x1a4
    float VerticalImpulsePitch; // 0x1a8
    float PitchInterpSpeed; // 0x1ac
    float PitchSpringHalflife; // 0x1b0
    float DelayBeforeMoving; // 0x1b4
    float StartDirectionMatchTolerance; // 0x1b8
    FFlyingBroomImpulseData TurboImpulse; // 0x1bc
    float InterpToMaxSpeedSpeed; // 0x1d8
    ECustomInterpType::Type InterpToMaxSpeedType; // 0x1dc
    char pad_1dd[0x3];
    float HoverMaxAnimTurn; // 0x1e0
    float PassiveMaxAnimTurn; // 0x1e4
    float BoostMaxAnimTurn; // 0x1e8
    float TurboMaxAnimTurn; // 0x1ec
    float HoverAnimTurnHalflife; // 0x1f0
    float FastAnimTurnHalflife; // 0x1f4
    float MaxAnimThrusterForce; // 0x1f8
    float AnimSpeedHalflife; // 0x1fc
    float AnimUpDownHalflife; // 0x200
    float ReactPushbackForceAmount; // 0x204
    char pad_208[0x28];
    static UFlyingBroomPhysics_FreeRoam* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
