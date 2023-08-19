#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCreatureMoveToDesiredDirectionOverrideTask : public UAblAbilityTask {
public:
    FName TargetActorOrLocationKeyName; // 0x70
    static UAblCreatureMoveToDesiredDirectionOverrideTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
