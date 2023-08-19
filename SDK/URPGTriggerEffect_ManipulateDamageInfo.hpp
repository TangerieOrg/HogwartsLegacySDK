#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "URPGTriggerEffect_Base.hpp"
class UModFilter_DealDamage_Base;
#pragma pack(push, 1)
class URPGTriggerEffect_ManipulateDamageInfo : public URPGTriggerEffect_Base {
public:
    float TriggerChance; // 0x40
    char pad_44[0x4];
    FGameplayTagContainer MunitionsToAdd; // 0x48
    char pad_68[0x8];
    TArray<UModFilter_DealDamage_Base*> DamageFilters; // 0x70
    static URPGTriggerEffect_ManipulateDamageInfo* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
