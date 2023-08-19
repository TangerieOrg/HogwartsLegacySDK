#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblBallisticBounceBackTask : public UAblAbilityTask {
public:
    float Speed; // 0x70
    float Gravity; // 0x74
    bool ChooseRandomDirection; // 0x78
    char pad_79[0x3];
    float MaxAngle; // 0x7c
    static UAblBallisticBounceBackTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
