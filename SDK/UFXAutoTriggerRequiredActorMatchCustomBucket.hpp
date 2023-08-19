#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorMatchCustomBucket : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    FName CustomBucket; // 0x28
    static UFXAutoTriggerRequiredActorMatchCustomBucket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
