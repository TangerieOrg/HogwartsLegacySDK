#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblTransformIntoTask : public UAblAbilityTask {
public:
    FString CreatureName; // 0x70
    UClass* CreatureSpawnAbility; // 0x80
    bool bSetTransformedCreatureToWild; // 0x88
    char pad_89[0x7];
    static UAblTransformIntoTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
