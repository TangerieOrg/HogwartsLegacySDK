#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchTypes : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    TArray<void*> ActorTypes; // 0x28
    static UFXAutoTriggerRequiredActorsMatchTypes* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
