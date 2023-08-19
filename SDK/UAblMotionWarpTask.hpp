#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UAvaMotionWarpingModifierConfig;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblMotionWarpTask : public UAblAbilityTask {
public:
    UAvaMotionWarpingModifierConfig* RootMotionModifierConfig; // 0x70
    TArray<UAblTaskCondition*> Conditions; // 0x78
    bool bMustPassAllConditions; // 0x88
    char pad_89[0x7];
    static UAblMotionWarpTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
