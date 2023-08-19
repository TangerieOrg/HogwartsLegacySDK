#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollCOMLocationDrivingMode : uint8_t {
    NoDriving = 0,
    DriveToCapsuleLocation = 1,
    DriveToCapsuleHeight = 2,
    DriveToCapsuleLocationAndKeepMoving = 3,
    DriveToCapsuleHorizontalLocation = 4,
    DampVelocity = 5,
    ERagdollCOMLocationDrivingMode_MAX = 6,
};
#pragma pack(pop)
