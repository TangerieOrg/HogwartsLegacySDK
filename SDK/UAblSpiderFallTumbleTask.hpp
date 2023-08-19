#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UParticleSystem;
class AActor;
#pragma pack(push, 1)
class UAblSpiderFallTumbleTask : public UAblAbilityTask {
public:
    UClass* ParentClass; // 0x70
    UClass* ReactionAbility; // 0x78
    UClass* ProtegoReactionAbility; // 0x80
    UClass* SplatAbility; // 0x88
    float BranchAtFloorHeight; // 0x90
    float MaxSplatSpeed; // 0x94
    float RandRadianAngle; // 0x98
    float FloorImpactDamping; // 0x9c
    float FloorImpactDampingVariance; // 0xa0
    float MinSpeed; // 0xa4
    float MaxSpeed; // 0xa8
    char pad_ac[0x4];
    UParticleSystem* ProtegoParticleSystem; // 0xb0
    FAlphaBlend AnimationBlendOutOverride; // 0xb8
    static UAblSpiderFallTumbleTask* StaticClass();
    void HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
}; // Size: 0xe8
#pragma pack(pop)
