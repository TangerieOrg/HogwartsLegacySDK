#pragma once
#include <cstdint>
class UPhysicsAsset;
#pragma pack(push, 1)
struct FRagdollPhysicsBodyPredicate {
    UPhysicsAsset* WhenPhysicsAsset; // 0x0
    TArray<FName> IncludedPhysicBodyBones; // 0x8
    TArray<FName> ExcludedPhysicBodyBones; // 0x18
}; // Size: 0x28
#pragma pack(pop)
