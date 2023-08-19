#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUtilityArithmeticOperation : uint8_t {
    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
    EUtilityArithmeticOperation_MAX = 6,
};
#pragma pack(pop)
