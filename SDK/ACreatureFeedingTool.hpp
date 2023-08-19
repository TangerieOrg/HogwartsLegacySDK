#pragma once
#include <cstdint>
#include "ACreatureInteractionTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class ACreature_Character;
#pragma pack(push, 1)
class ACreatureFeedingTool : public ACreatureInteractionTool {
public:
    FGameplayTagContainer PelletsCloseReleaseTags; // 0x450
    FVector PelletsCloseReleaseVelocity; // 0x470
    char pad_47c[0x4];
    FGameplayTagContainer PelletsMediumReleaseTags; // 0x480
    float PelletsMediumReleaseRange; // 0x4a0
    FVector PelletsMediumReleaseVelocityMin; // 0x4a4
    FVector PelletsMediumReleaseVelocityMax; // 0x4b0
    char pad_4bc[0x4];
    FGameplayTagContainer PelletsThrowReleaseTags; // 0x4c0
    float PelletsThrowReleaseRange; // 0x4e0
    FVector PelletsThrowReleaseVelocityMin; // 0x4e4
    FVector PelletsThrowReleaseVelocityMax; // 0x4f0
    char pad_4fc[0x24];
    static ACreatureFeedingTool* StaticClass();
    void SetupDistanceBasedPelletReleaseAnim(ACreature_Character* InCreatureCharacter);
    FVector CalculateDynamicPelletReleaseVeloctiy(ACreature_Character* InCreatureCharacter);
}; // Size: 0x520
#pragma pack(pop)
