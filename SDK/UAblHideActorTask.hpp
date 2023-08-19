#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblHideActorTask : public UAblAbilityTask {
public:
    bool bHideThroughManagedState; // 0x70
    bool bIgnoreParticleEmitters; // 0x71
    bool bIgnoreStaticMeshes; // 0x72
    char pad_73[0x5];
    TArray<UAblTaskCondition*> Conditions; // 0x78
    bool bMustPassAllConditions; // 0x88
    char pad_89[0x7];
    static UAblHideActorTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
