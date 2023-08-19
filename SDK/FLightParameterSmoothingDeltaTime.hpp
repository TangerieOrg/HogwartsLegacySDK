#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightParameterSmoothingDeltaTime {
    float DeltaRealTimeSeconds; // 0x0
    float DeltaTimeOfDayHours; // 0x4
    float DeltaNormalizedTimeHours; // 0x8
}; // Size: 0xc
#pragma pack(pop)
