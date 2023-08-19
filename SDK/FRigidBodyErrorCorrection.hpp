#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigidBodyErrorCorrection {
    float PingExtrapolation; // 0x0
    float PingLimit; // 0x4
    float ErrorPerLinearDifference; // 0x8
    float ErrorPerAngularDifference; // 0xc
    float MaxRestoredStateError; // 0x10
    float MaxLinearHardSnapDistance; // 0x14
    float PositionLerp; // 0x18
    float AngleLerp; // 0x1c
    float LinearVelocityCoefficient; // 0x20
    float AngularVelocityCoefficient; // 0x24
    float ErrorAccumulationSeconds; // 0x28
    float ErrorAccumulationDistanceSq; // 0x2c
    float ErrorAccumulationSimilarity; // 0x30
}; // Size: 0x34
#pragma pack(pop)
