#pragma once
#include <cstdint>
#include "FEnemy_TargetSense_FOVSet.hpp"
#pragma pack(push, 1)
struct FEnemy_TargetSense_FOV {
    FEnemy_TargetSense_FOVSet Standard; // 0x0
    FEnemy_TargetSense_FOVSet Disillusionment; // 0x94
    FEnemy_TargetSense_FOVSet Invisible; // 0x128
}; // Size: 0x1bc
#pragma pack(pop)
