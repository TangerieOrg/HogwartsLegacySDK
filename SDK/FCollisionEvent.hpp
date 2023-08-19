#pragma once
#include <cstdint>
#include "FCacheEventBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCollisionEvent : public FCacheEventBase {
    FVector Location; // 0x8
    FVector AccumulatedImpulse; // 0x14
    FVector Normal; // 0x20
    FVector Velocity1; // 0x2c
    FVector Velocity2; // 0x38
    FVector DeltaVelocity1; // 0x44
    FVector DeltaVelocity2; // 0x50
    FVector AngularVelocity1; // 0x5c
    FVector AngularVelocity2; // 0x68
    float Mass1; // 0x74
    float Mass2; // 0x78
    float PenetrationDepth; // 0x7c
}; // Size: 0x80
#pragma pack(pop)
