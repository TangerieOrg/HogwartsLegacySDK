#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EJumpControlType : uint8_t {
    Velocity = 0,
    Speed = 1,
    EJumpControlType_MAX = 2,
};
#pragma pack(pop)
