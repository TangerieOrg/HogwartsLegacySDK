#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchOr : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    TArray<UFXAutoTriggerRequiredActorsMatchBase*> Conditions; // 0x28
    static UFXAutoTriggerRequiredActorsMatchOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
