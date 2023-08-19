#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsCustomBucket : public UFXAutoTriggerRequiredActorsBase {
public:
    FName CustomBucket; // 0x28
    static UFXAutoTriggerRequiredActorsCustomBucket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
