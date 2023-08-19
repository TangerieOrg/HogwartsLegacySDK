#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
class AActor;
class UInteractionArchitectAsset;
class UClass;
#pragma pack(push, 1)
struct FMunitionImpactData {
    FHitResult m_hitResult; // 0x0
    AActor* m_pMunitionActor; // 0x88
    AActor* m_pMunitionOwner; // 0x90
    AActor* m_pInstigator; // 0x98
    TArray<UInteractionArchitectAsset*> m_impactDataAssets; // 0xa0
    FName MunitionImpactType; // 0xb0
    FGameplayTagContainer MunitionTagContainer; // 0xb8
    UClass* DamageTypeClass; // 0xd8
    float m_damage; // 0xe0
    float m_maxDamage; // 0xe4
    float CharacterDamage; // 0xe8
    char pad_ec[0x4];
}; // Size: 0xf0
#pragma pack(pop)
