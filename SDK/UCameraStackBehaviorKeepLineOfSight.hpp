#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorKeepLineOfSight : public UCameraStackBehaviorBlend {
public:
    bool bDrawDebug; // 0x1b8
    char pad_1b9[0x3];
    float MaximumAngleInRadians; // 0x1bc
    UCurveFloat* WalkAxisToMaxAngleScaleCurve; // 0x1c0
    int32_t SweepCountPerUpdate; // 0x1c8
    float SecondsBetweenSweeps; // 0x1cc
    float StepSizeInRadians; // 0x1d0
    float RotationSpeed; // 0x1d4
    float InterpSpeed; // 0x1d8
    float RotationSpeedTight; // 0x1dc
    float InterpSpeedTight; // 0x1e0
    char pad_1e4[0x4];
    UCurveFloat* CollisionProximityTimeToSpeedAlpha; // 0x1e8
    ECollisionChannel LineOfSightProbeChannel; // 0x1f0
    char pad_1f1[0x3];
    float LineOfSightProbeSize; // 0x1f4
    FName TraceTagName; // 0x1f8
    char pad_200[0x38];
    static UCameraStackBehaviorKeepLineOfSight* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
