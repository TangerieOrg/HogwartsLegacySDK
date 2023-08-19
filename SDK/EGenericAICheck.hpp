#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGenericAICheck {
    Less = 0,
    LessOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    IsTrue = 6,
    MAX = 7,
};
#pragma pack(pop)
