#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblEnemyMaintainVelocityTask : public UAblAbilityTask {
public:
    float Speed; // 0x70
    float Gravity; // 0x74
    static UAblEnemyMaintainVelocityTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
