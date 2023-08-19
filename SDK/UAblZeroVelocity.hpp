#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblZeroVelocity : public UAblAbilityTask {
public:
    bool bZeroLinearVelocity; // 0x70
    bool bZeroAngularVelocity; // 0x71
    char pad_72[0x6];
    static UAblZeroVelocity* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
