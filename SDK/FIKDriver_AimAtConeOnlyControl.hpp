#pragma once
#include <cstdint>
#include "EAnimationDirections.hpp"
#include "FBoneReferenceEx.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FIKDriver_AimAtConeOnlyControl {
    FBoneReferenceEx AimBoneReference; // 0x0
    FBoneReferenceEx NeckBoneReference; // 0x10
    EAnimationDirections DirectionDriver; // 0x20
    char pad_21[0x3];
    float YawLimit; // 0x24
    float PitchLimit; // 0x28
    bool ReduceConeWithSpeed; // 0x2c
    char pad_2d[0x3];
    float SpeedForReduction; // 0x30
    float RatioToReduce; // 0x34
    float BackDeadZoneAngle; // 0x38
    FRotator ConeRotationOffset; // 0x3c
    FRotator TaskRotationOffset; // 0x48
    FVector2D BlendSpeedRange; // 0x54
    FVector2D Speed2BlendSpeedRange; // 0x5c
    float TimeDelay; // 0x64
    float DelayStartTime; // 0x68
    FVector PrevTargetDirection; // 0x6c
}; // Size: 0x78
#pragma pack(pop)
