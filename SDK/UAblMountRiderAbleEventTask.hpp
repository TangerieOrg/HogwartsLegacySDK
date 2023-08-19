#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblMountRiderAbleEventTask : public UAblAbilityTask {
public:
    FName EventName; // 0x70
    static UAblMountRiderAbleEventTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
