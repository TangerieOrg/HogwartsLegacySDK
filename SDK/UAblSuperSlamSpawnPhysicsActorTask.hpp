#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSuperSlamSpawnPhysicsActorTask : public UAblAbilityTask {
public:
    int32_t MinNumberOfItems; // 0x70
    int32_t MaxNumberOfItems; // 0x74
    float ConeAngle; // 0x78
    float MinForce; // 0x7c
    float MaxForce; // 0x80
    float MinAngularForce; // 0x84
    float MaxAngularForce; // 0x88
    char pad_8c[0x54];
    static UAblSuperSlamSpawnPhysicsActorTask* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
