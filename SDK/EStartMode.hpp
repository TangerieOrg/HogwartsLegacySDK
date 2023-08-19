#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStartMode : uint8_t {
    Timed = 0,
    Triggered = 1,
    EStartMode_MAX = 2,
};
#pragma pack(pop)
