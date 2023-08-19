#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPanningMethod : int8_t {
    Linear = 0,
    EqualPower = 1,
    EPanningMethod_MAX = 2,
};
#pragma pack(pop)
