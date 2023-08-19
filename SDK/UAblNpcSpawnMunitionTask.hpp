#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblNpcSpawnMunitionTask : public UAblAbilityTask {
public:
    UClass* MunitionClass; // 0x70
    bool bUseReactionInstigatorAsMunitionInstigator; // 0x78
    char pad_79[0x7];
    TArray<UAblTaskCondition*> Conditions; // 0x80
    bool bMustPassAllConditions; // 0x90
    char pad_91[0x7];
    static UAblNpcSpawnMunitionTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
