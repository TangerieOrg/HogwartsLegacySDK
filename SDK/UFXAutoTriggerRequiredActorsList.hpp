#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsList : public UFXAutoTriggerRequiredActorsBase {
public:
    TArray<UFXAutoTriggerRequiredActorsBase*> RequiredActors; // 0x28
    static UFXAutoTriggerRequiredActorsList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
