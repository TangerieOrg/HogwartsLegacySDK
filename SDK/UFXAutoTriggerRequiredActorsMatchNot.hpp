#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchNot : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x28
    static UFXAutoTriggerRequiredActorsMatchNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
