#pragma once
#include <cstdint>
#include "FVector.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FChaosPhysicsCollisionInfo {
    UPrimitiveComponent* Component; // 0x0
    UPrimitiveComponent* OtherComponent; // 0x8
    FVector Location; // 0x10
    FVector Normal; // 0x1c
    FVector AccumulatedImpulse; // 0x28
    FVector Velocity; // 0x34
    FVector OtherVelocity; // 0x40
    FVector AngularVelocity; // 0x4c
    FVector OtherAngularVelocity; // 0x58
    float Mass; // 0x64
    float OtherMass; // 0x68
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
