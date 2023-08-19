#pragma once
#include <cstdint>
#include "EablEnemy_DragonMobilityType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablDragonMobilityTask : public UAblAbilityTask {
public:
    EablEnemy_DragonMobilityType MobilityType; // 0x70
    char pad_71[0x3];
    float DistFromTarget; // 0x74
    float HeightAboveTarget; // 0x78
    float MoveSpeed; // 0x7c
    static UablDragonMobilityTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
