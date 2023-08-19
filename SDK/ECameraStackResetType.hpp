#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackResetType : uint8_t {
    NoReset = 0,
    FullReset = 1,
    CurrentCameraDirection = 2,
    CurrentCameraYawAndDefaultPitch = 3,
    LookAtLocation = 4,
    FixedArmRotation = 5,
    FullResetWithOffset = 6,
    ECameraStackResetType_MAX = 7,
};
#pragma pack(pop)
