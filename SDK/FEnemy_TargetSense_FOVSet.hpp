#pragma once
#include <cstdint>
#include "FEnemy_TargetSense_FOVParams.hpp"
#pragma pack(push, 1)
struct FEnemy_TargetSense_FOVSet {
    FEnemy_TargetSense_FOVParams Aware; // 0x0
    FEnemy_TargetSense_FOVParams Alert; // 0x30
    FEnemy_TargetSense_FOVParams Attack; // 0x60
    float DisallowTimeWhenApplied; // 0x90
}; // Size: 0x94
#pragma pack(pop)
