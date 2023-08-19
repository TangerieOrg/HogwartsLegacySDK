#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EValueComparison : uint8_t {
    Less = 0,
    LessEqual = 1,
    Equal = 2,
    GreaterEqual = 3,
    Greater = 4,
    NotEqual = 5,
    EValueComparison_MAX = 6,
};
#pragma pack(pop)
