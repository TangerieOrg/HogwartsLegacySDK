#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractUseTargetTracker : uint8_t {
    FaceTracker = 0,
    AimAtTracker = 1,
    LookAtTracker = 2,
    EInteractUseTargetTracker_MAX = 3,
};
#pragma pack(pop)
