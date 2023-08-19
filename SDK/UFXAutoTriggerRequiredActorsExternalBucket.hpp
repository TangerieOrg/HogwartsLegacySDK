#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
class UFXAutoTriggerRequiredActorsMatchBase;
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsExternalBucket : public UFXAutoTriggerRequiredActorsBase {
public:
    FName ExternalBucket; // 0x28
    UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x30
    static UFXAutoTriggerRequiredActorsExternalBucket* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
