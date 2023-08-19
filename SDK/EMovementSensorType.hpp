#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovementSensorType : uint8_t {
    BlockingCollision = 0,
    JumpOn = 1,
    JumpDown = 2,
    JumpOver = 3,
    Landing = 4,
    GroundHit = 5,
    None = 6,
    EMovementSensorType_MAX = 7,
};
#pragma pack(pop)
