#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPropModCalculationType : uint8_t {
    Maximum = 0,
    Minimum = 1,
    PreAdd = 2,
    FactorIncrease = 3,
    Multiply = 4,
    PostAdd = 5,
    Count = 6,
    EPropModCalculationType_MAX = 7,
};
#pragma pack(pop)
