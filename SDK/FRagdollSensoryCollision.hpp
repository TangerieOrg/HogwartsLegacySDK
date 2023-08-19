#pragma once
#include <cstdint>
#include "FRagdollPhysicsBodyPredicate.hpp"
#pragma pack(push, 1)
struct FRagdollSensoryCollision {
    float ImpactImpulseMin; // 0x0
    float ImpactImpulseMax; // 0x4
    bool IfOutOfRange; // 0x8
    bool RequireNormalToWorldUpRealitiveRange; // 0x9
    char pad_a[0x2];
    float NormalToWorldUpAngleMin; // 0xc
    float NormalToWorldUpAngleMax; // 0x10
    char pad_14[0x4];
    TArray<FRagdollPhysicsBodyPredicate> PhysicsBodyRequirements; // 0x18
    bool Status; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
