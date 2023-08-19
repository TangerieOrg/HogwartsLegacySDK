#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsColorCurveVarMode : uint8_t {
    Normal = 0,
    Clamped = 1,
    Unadjusted = 2,
    EEnvironmentalGlobalsColorCurveVarMode_MAX = 3,
};
#pragma pack(pop)
