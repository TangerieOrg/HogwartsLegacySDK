#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountMovementState : uint8_t {
    Ground = 0,
    Flying = 1,
    Takeoff = 2,
    Landing = 3,
    EMountMovementState_MAX = 4,
};
#pragma pack(pop)
