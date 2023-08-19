#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollDriveAnimEnum : uint8_t {
    DriveHoldPriorLastPose = 0,
    DriveKeepPrior = 1,
    DriveToAnim = 2,
    DriveToGetupPose = 3,
    ERagdollDriveAnimEnum_MAX = 4,
};
#pragma pack(pop)
