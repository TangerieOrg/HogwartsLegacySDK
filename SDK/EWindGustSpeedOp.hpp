#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindGustSpeedOp : uint8_t {
    Multiply = 0,
    Add = 1,
    Subtract = 2,
    Replace = 3,
    EWindGustSpeedOp_MAX = 4,
};
#pragma pack(pop)
