#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class UDLSSMode : uint8_t {
    Off = 0,
    Auto = 1,
    UltraQuality = 2,
    Quality = 3,
    Balanced = 4,
    Performance = 5,
    UltraPerformance = 6,
    UDLSSMode_MAX = 7,
};
#pragma pack(pop)
