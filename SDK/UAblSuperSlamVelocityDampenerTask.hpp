#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSuperSlamVelocityDampenerTask : public UAblAbilityTask {
public:
    float AngularVelocityMultiplier; // 0x70
    float LinearVelocityMultiplier; // 0x74
    float AngularDamping; // 0x78
    float LinearDamping; // 0x7c
    static UAblSuperSlamVelocityDampenerTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
