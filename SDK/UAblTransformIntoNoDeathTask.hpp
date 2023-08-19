#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblTransformIntoNoDeathTask : public UAblAbilityTask {
public:
    FString CreatureName; // 0x70
    UClass* CreatureSpawnAbility; // 0x80
    static UAblTransformIntoNoDeathTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
