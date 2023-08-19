#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
class UFXAutoTriggerRequiredActorsMatchBase;
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatch : public UFXAutoTriggerRequiredActorsBase {
public:
    char pad_28[0x28];
    UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x50
    static UFXAutoTriggerRequiredActorsMatch* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
