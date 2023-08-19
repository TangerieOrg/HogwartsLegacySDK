#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchTag : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    FName ActorTag; // 0x28
    static UFXAutoTriggerRequiredActorsMatchTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
