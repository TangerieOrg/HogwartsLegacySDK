#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialShadingRate : uint8_t {
    MSR_1x1 = 0,
    MSR_2x1 = 1,
    MSR_1x2 = 2,
    MSR_2x2 = 3,
    MSR_4x2 = 4,
    MSR_2x4 = 5,
    MSR_4x4 = 6,
    MSR_Count = 7,
    MSR_MAX = 8,
};
#pragma pack(pop)
