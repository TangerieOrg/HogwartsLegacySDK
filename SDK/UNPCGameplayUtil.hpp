#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UNPCGameplayUtil : public UObject {
public:
    static UNPCGameplayUtil* StaticClass();
    static void SetLinearDampeningAcrossPhysicsBodies(USkeletalMeshComponent* SkeletalMeshComp, float LinearDampening);
    static void AddImpulseSpread(USkeletalMeshComponent* SkeletalMeshComp, FVector Velocity, bool bVelocityChange);
}; // Size: 0x28
#pragma pack(pop)
