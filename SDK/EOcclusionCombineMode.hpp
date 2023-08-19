#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOcclusionCombineMode : uint8_t {
    OCM_Minimum = 0,
    OCM_Multiply = 1,
    OCM_MAX = 2,
};
#pragma pack(pop)
