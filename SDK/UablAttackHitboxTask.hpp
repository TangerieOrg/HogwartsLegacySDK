#pragma once
#include <cstdint>
#include "FAblAbilityTargetTypeLocation.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UablAttackHitboxTask : public UAblAbilityTask {
public:
    UClass* MunitionType; // 0x70
    FName MunitionImpactType; // 0x78
    FGameplayTagContainer MunitionTagContainer; // 0x80
    UInteractionArchitectAsset* MunitionDataAsset; // 0xa0
    FAblAbilityTargetTypeLocation HitboxLocation; // 0xa8
    bool bAttachToSocket; // 0xd0
    bool bNotifyParrySystem; // 0xd1
    char pad_d2[0x6];
    static UablAttackHitboxTask* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
