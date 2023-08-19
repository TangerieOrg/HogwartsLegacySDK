#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchNotOfTypes : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    TArray<void*> NotOfActorTypes; // 0x28
    static UFXAutoTriggerRequiredActorsMatchNotOfTypes* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
