#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchTags : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    TArray<FName> ActorTags; // 0x28
    static UFXAutoTriggerRequiredActorsMatchTags* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
