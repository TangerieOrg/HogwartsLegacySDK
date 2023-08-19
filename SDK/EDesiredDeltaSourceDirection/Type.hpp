#pragma once
#include <cstdint>
namespace EDesiredDeltaSourceDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    FacingDirection = 0,
    DesiredDirection = 1,
    Facing = 2,
    LookAt = 3,
    AimAt = 4,
    StrafeDirection = 5,
    VelocityDirection = 6,
    EDesiredDeltaSourceDirection_MAX = 7,
};
#pragma pack(pop)
}
