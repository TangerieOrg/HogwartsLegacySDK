#pragma once
#include <cstdint>
#include "ECreatureAIInitialState.hpp"
#include "ECreatureCageAnimation.hpp"
#include "ECreatureMovementSpeed.hpp"
class APathNode;
class AActor;
class ACreatureTetherVolume;
class ACreaturePerceptionVolume;
#pragma pack(push, 1)
struct FCreatureSpawnOverrides {
    ECreatureAIInitialState StartState; // 0x0
    char pad_1[0x7];
    APathNode* StartPathNode; // 0x8
    AActor* Cage; // 0x10
    ECreatureCageAnimation CageAnimation; // 0x18
    bool bOverride_Team; // 0x19
    char pad_1a[0x6];
    FString Team; // 0x20
    bool bOverride_Gender; // 0x30
    bool bGenderIsMaleOverride; // 0x31
    bool bIsProtectedFromSpells; // 0x32
    bool bIsUncapturable; // 0x33
    char pad_34[0x4];
    TArray<FString> AllowedVariations; // 0x38
    FName NurturingSpaceOverride; // 0x48
    bool bOverride_ShouldTAKWhenWild; // 0x50
    bool bShouldTAKWhenWildOverride; // 0x51
    bool bSpawnFlying; // 0x52
    bool bSpawnPerched; // 0x53
    bool bPlaySpawnFX; // 0x54
    bool bFadeOnSpawn; // 0x55
    bool bOverride_FadeWhenFleeing; // 0x56
    bool bFadeWhenFleeingOverride; // 0x57
    TArray<ACreaturePerceptionVolume*> PerceptionVolumes; // 0x58
    ACreatureTetherVolume* TetherVolume; // 0x68
    bool bOverride_IsFleeConstrainedByTether; // 0x70
    bool bIsFleeConstrainedByTether; // 0x71
    bool bOverride_IsPerchingConstrainedByTether; // 0x72
    bool bIsPerchingConstrainedByTether; // 0x73
    bool bOverride_MaximumFleeMovementSpeed; // 0x74
    ECreatureMovementSpeed MaximumFleeMovementSpeed; // 0x75
    bool bOverride_CombatMaxDistanceFromTether; // 0x76
    char pad_77[0x1];
    float CombatMaxDistanceFromTether; // 0x78
    char pad_7c[0x4];
}; // Size: 0x80
#pragma pack(pop)
