#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCustomEventFiredOnMeshOverlapTask : public UAblAbilityTask {
public:
    TArray<FName> BodyNames; // 0x70
    FName CollisionProfileName; // 0x80
    FName CustomEventName; // 0x88
    static UAblCustomEventFiredOnMeshOverlapTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
