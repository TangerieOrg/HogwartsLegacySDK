#pragma once
#include <cstdint>
#include "EWindParametersTimeBase.hpp"
#pragma pack(push, 1)
struct FWindParametersSampleTime {
    EWindParametersTimeBase Base; // 0x0
    char pad_1[0x3];
    float Factor; // 0x4
}; // Size: 0x8
#pragma pack(pop)
