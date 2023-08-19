#pragma once
#include <cstdint>
#include "EHiddenTeleportAttackStep.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UAblObjectArchitectTagChooser;
#pragma pack(push, 1)
class UAblEnemyHiddenTeleportAttackTask : public UAblAbilityTask {
public:
    EHiddenTeleportAttackStep Step; // 0x70
    char pad_71[0x7];
    FGameplayTagContainer TargetLocationVfxBaseTags; // 0x78
    TArray<UAblObjectArchitectTagChooser*> TargetLocationVfxTagChoosers; // 0x98
    static UAblEnemyHiddenTeleportAttackTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
