#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosWeightMapTarget {
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping = 5,
    TetherStiffness = 6,
    EChaosWeightMapTarget_MAX = 7,
};
#pragma pack(pop)
