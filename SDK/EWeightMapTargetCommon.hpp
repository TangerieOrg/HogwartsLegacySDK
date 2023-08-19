#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeightMapTargetCommon : uint8_t {
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping = 5,
    EWeightMapTargetCommon_MAX = 6,
};
#pragma pack(pop)
