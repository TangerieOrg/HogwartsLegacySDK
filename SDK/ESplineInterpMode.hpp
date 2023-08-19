#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESplineInterpMode : int32_t {
    Auto = 0,
    AutoClamped = 1,
    User = 2,
    Linear = 3,
    Constant = 4,
    Unknown = 5,
    ESplineInterpMode_MAX = 6,
};
#pragma pack(pop)
