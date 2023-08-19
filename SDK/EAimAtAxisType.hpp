#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAimAtAxisType : int8_t {
    Up = 0,
    Down = 1,
    Forward = 2,
    Backward = 3,
    Right = 4,
    Left = 5,
    EAimAtAxisType_MAX = 6,
};
#pragma pack(pop)
