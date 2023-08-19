#pragma once
#include <cstdint>
#include "FGlobalLightingSunColorParams.hpp"
#pragma pack(push, 1)
struct FGlobalLightingGenerateSunColorCurve : public FGlobalLightingSunColorParams {
    float SunAngleStart; // 0x24
    float SunAngleEnd; // 0x28
    float SunAngleIncrement; // 0x2c
    float ErrorTolerance; // 0x30
    bool bCubic; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
