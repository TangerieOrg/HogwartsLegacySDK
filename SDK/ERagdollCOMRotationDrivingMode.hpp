#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollCOMRotationDrivingMode : uint8_t {
    NoDriving = 0,
    DriveToCapsuleRotation = 1,
    DriveToKeepUpright = 2,
    ERagdollCOMRotationDrivingMode_MAX = 3,
};
#pragma pack(pop)
