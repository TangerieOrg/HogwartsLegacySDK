#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightParameterSmoothingDiscontinuitySettings {
    float MaxDeltaRealTimeSeconds; // 0x0
    float MaxDeltaTimeOfDayHours; // 0x4
    float MaxDeltaNormalizedTimeHours; // 0x8
}; // Size: 0xc
#pragma pack(pop)
