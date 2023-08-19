#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameEvent_Intensity : uint8_t {
    None = 0,
    White = 1,
    Yellow = 2,
    Red = 3,
    EGameEvent_MAX = 4,
};
#pragma pack(pop)
