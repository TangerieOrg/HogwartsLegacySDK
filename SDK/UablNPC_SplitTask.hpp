#pragma once
#include <cstdint>
#include "ENPC_Split.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UEnemyAIAttackData;
#pragma pack(push, 1)
class UablNPC_SplitTask : public UAblAbilityTask {
public:
    ENPC_Split SplitMode; // 0x70
    char pad_71[0x7];
    FGameplayTagContainer ContextTags; // 0x78
    TArray<UEnemyAIAttackData*> m_PossibleSplits; // 0x98
    bool bIgnoreSelectRanges; // 0xa8
    bool bIgnoreMinAttackAngle; // 0xa9
    bool bGetSplitFromCurrentAttackData; // 0xaa
    char pad_ab[0x5];
    static UablNPC_SplitTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
