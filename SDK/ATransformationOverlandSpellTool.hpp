#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class ATransformationOverlandSpellTool : public AFireOnceSpellTool {
public:
    float SpawnDelay; // 0x870
    int32_t SpawnUpdateCount; // 0x874
    float StartEffectDelay; // 0x878
    float HideDelay; // 0x87c
    float RestoreDelay; // 0x880
    float SpawnHeightAdj; // 0x884
    FVector SpawnAngularVelocity; // 0x888
    FVector CharacterSpawnAngularVelocity; // 0x894
    FVector PlayerSpawnAngularVelocity; // 0x8a0
    FVector SpawnLinearVelocity; // 0x8ac
    FVector CharacterSpawnLinearVelocity; // 0x8b8
    FVector RestoreAngularVelocity; // 0x8c4
    FVector CharacterRestoreAngularVelocity; // 0x8d0
    FVector PlayerRestoreAngularVelocity; // 0x8dc
    FVector RestoreLinearVelocity; // 0x8e8
    FVector CharacterRestoreLinearVelocity; // 0x8f4
    bool SpawnFacingCaster; // 0x900
    char pad_901[0x7];
    TArray<UMultiFX2_Base*> HideFX2; // 0x908
    TArray<UMultiFX2_Base*> SpawnFX2; // 0x918
    TArray<UMultiFX2_Base*> UnspawnFX2; // 0x928
    TArray<UMultiFX2_Base*> RestoreFX2; // 0x938
    FGameplayTagContainer RestoreMunitionTagContainer; // 0x948
    UInteractionArchitectAsset* RestoreMunitionDataAsset; // 0x968
    char pad_970[0xc0];
    static ATransformationOverlandSpellTool* StaticClass();
}; // Size: 0xa30
#pragma pack(pop)
