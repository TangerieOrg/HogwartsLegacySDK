#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFilterInterpolationType : uint8_t {
    BSIT_Average = 0,
    BSIT_Linear = 1,
    BSIT_Cubic = 2,
    BSIT_MAX = 3,
};
#pragma pack(pop)
