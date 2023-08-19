#pragma once
#include <cstdint>
namespace EDesiredDeltaTargetTracker {
#pragma pack(push, 1)
enum Type : uint8_t {
    DesiredDirection = 0,
    LastDesiredDirection = 1,
    Facing = 2,
    LookAt = 3,
    AimAt = 4,
    StrafeDirection = 5,
    VelocityDirection = 6,
    BufferedDesiredDirection = 7,
    EDesiredDeltaTargetTracker_MAX = 8,
};
#pragma pack(pop)
}
